// rea decompile_all
// name: System.Threading.AsyncFlowControl$$Undo
// address: 0x7621e98
// body: available
// range: 0x7621e98-0x7621e9b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void System_Threading_AsyncFlowControl__Undo(char *param_1)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long *plVar5;
  long lVar6;
  
  if ((DAT_0952213a & 1) == 0) {
    FUN_03f5c2a4(&DAT_09184350);
    DAT_0952213a = 1;
  }
  plVar5 = (long *)(param_1 + 0x10);
  lVar6 = *plVar5;
  if (lVar6 == 0) {
    puVar2 = &DAT_091fc0f0;
  }
  else {
    lVar1 = System_Threading_Thread__get_CurrentThread(0);
    if (lVar6 == lVar1) {
      if (*param_1 != '\0') {
        lVar6 = System_Threading_Thread__get_CurrentThread(0);
        if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        lVar6 = System_Threading_Thread__GetMutableExecutionContext(lVar6,0);
        if (lVar6 != *(long *)(param_1 + 8)) {
          puVar2 = &DAT_091fc100;
          goto LAB_07621f64;
        }
        if (*(int *)(DAT_09184350 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        System_Threading_ExecutionContext__RestoreFlow();
      }
      *plVar5 = 0;
      thunk_FUN_03f5d7b8(plVar5,0);
      return;
    }
    puVar2 = &DAT_091fc0f8;
  }
LAB_07621f64:
  uVar3 = thunk_FUN_03fc39d4(puVar2);
  uVar3 = System_Environment__GetResourceString(uVar3,0);
  thunk_FUN_03fc39d4(&DAT_091870e0);
  uVar4 = thunk_FUN_03f9944c();
  System_InvalidOperationException___ctor(uVar4,uVar3,0);
  uVar3 = thunk_FUN_03fc39d4(&DAT_091c10e8);
                    /* WARNING: Subroutine does not return */
  FUN_03f5c414(uVar4,uVar3);
}

