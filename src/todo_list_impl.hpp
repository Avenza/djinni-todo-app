#pragma once

#include "todo_list.hpp"
 
namespace todolist {
 
    class TodoListImpl : public TodoList {
 
    public:
 
        // Constructor
        TodoListImpl();
        
        // Database functions we need to implement in C++
        std::vector<Todo> get_todos();
        int32_t add_todo(const std::string & label);
        bool update_todo_status(int32_t id, TodoStatus status);
        bool delete_todo(int32_t id);

    private:

        void _setup_db();
        void _handle_query(std::string query);
 
    };
 
}
