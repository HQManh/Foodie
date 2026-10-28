// rea decompile_all
// name: FUN_03fe9db4
// address: 0x3fe9db4
// body: available
// range: 0x3fe9db4-0x3fe9de7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_03fe9db4(pthread_key_t *param_1)

{
  undefined8 *puVar1;
  int iVar2;
  undefined8 *puVar3;
  long lVar4;
  void *pvVar5;
  long *plVar6;
  undefined8 *puVar7;
  
  iVar2 = pthread_key_create(param_1,(__destr_function *)&UNK_03fea1fc);
  if (iVar2 == 0) {
    return;
  }
  puVar3 = (undefined8 *)
           std::__ndk1::__throw_system_error(iVar2,"__thread_specific_ptr construction failed");
  puVar1 = (undefined8 *)puVar3[4];
  for (puVar7 = (undefined8 *)puVar3[3]; puVar7 != puVar1; puVar7 = puVar7 + 2) {
    std::__ndk1::condition_variable::notify_all((condition_variable *)*puVar7);
    std::__ndk1::mutex::unlock((mutex *)puVar7[1]);
  }
  puVar1 = (undefined8 *)puVar3[1];
  for (puVar7 = (undefined8 *)*puVar3; puVar7 != puVar1; puVar7 = puVar7 + 1) {
    std::__ndk1::__assoc_sub_state::__make_ready((__assoc_sub_state *)*puVar7);
    plVar6 = (long *)*puVar7;
    lVar4 = FUN_0404c020(0xffffffffffffffff,plVar6 + 1);
    if (lVar4 == 0) {
      (**(code **)(*plVar6 + 0x10))(plVar6);
    }
  }
  pvVar5 = (void *)puVar3[3];
  if (pvVar5 != (void *)0x0) {
    puVar3[4] = pvVar5;
    operator_delete(pvVar5);
  }
  pvVar5 = (void *)*puVar3;
  if (pvVar5 == (void *)0x0) {
    return;
  }
  puVar3[1] = pvVar5;
  operator_delete(pvVar5);
  return;
}

