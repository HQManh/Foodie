// rea decompile_all
// name: System.Threading.Timer$$Change
// address: 0x762b2d4
// body: available
// range: 0x762b2d4-0x762b49b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x762b440 to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x762b494 to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x762b498 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 System_Threading_Timer__Change(long param_1,long param_2,long param_3,ulong param_4)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  if (param_2 < 0xffffffff) {
    if (param_3 < 0xffffffff) {
      if (param_2 < -1) {
        thunk_FUN_03fc39d4(&DAT_09181558);
        uVar7 = thunk_FUN_03f9944c();
        puVar5 = (undefined8 *)&DAT_0921aab0;
      }
      else {
        if (-2 < param_3) {
          if (*(char *)(param_1 + 0x40) != '\0') {
            uVar6 = thunk_FUN_03fc39d4(&DAT_091fd880);
            uVar6 = System_Environment__GetResourceString(uVar6,0);
            thunk_FUN_03fc39d4(&DAT_09188ae0);
            uVar7 = thunk_FUN_03f9944c();
            System_ObjectDisposedException___ctor(uVar7,0,uVar6,0);
            uVar6 = thunk_FUN_03fc39d4(&DAT_091db7d8);
                    /* WARNING: Subroutine does not return */
            FUN_03f5c414(uVar7,uVar6);
          }
          *(long *)(param_1 + 0x28) = param_2;
          *(long *)(param_1 + 0x30) = param_3;
          lVar1 = 0;
          if (param_2 != 0) {
            if (param_2 < 0) {
              lVar1 = 0x7fffffffffffffff;
              if ((param_4 & 1) != 0) {
                *(undefined8 *)(param_1 + 0x38) = 0x7fffffffffffffff;
                return 1;
              }
            }
            else {
              lVar1 = thunk_FUN_03f8f488();
              lVar1 = lVar1 + param_2 * 10000;
            }
          }
          lVar2 = System_Threading_Timer__get_scheduler();
          if (lVar2 != 0) {
            System_Threading_Timer_Scheduler__Change(lVar2,param_1,lVar1);
            return 1;
          }
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        thunk_FUN_03fc39d4(&DAT_09181558);
        uVar7 = thunk_FUN_03f9944c();
        puVar5 = &DAT_09220c38;
      }
      uVar6 = thunk_FUN_03fc39d4(puVar5);
      System_ArgumentOutOfRangeException___ctor(uVar7,uVar6,0);
      goto LAB_0762b42c;
    }
    thunk_FUN_03fc39d4(&DAT_09181558);
    uVar7 = thunk_FUN_03f9944c();
    uVar6 = thunk_FUN_03fc39d4(&DAT_09220c38);
    puVar3 = &DAT_0920a750;
  }
  else {
    thunk_FUN_03fc39d4(&DAT_09181558);
    uVar7 = thunk_FUN_03f9944c();
    uVar6 = thunk_FUN_03fc39d4(&DAT_0921aab0);
    puVar3 = &DAT_09200de0;
  }
  uVar4 = thunk_FUN_03fc39d4(puVar3);
  System_ArgumentOutOfRangeException___ctor(uVar7,uVar6,uVar4,0);
LAB_0762b42c:
  uVar6 = thunk_FUN_03fc39d4(&DAT_091db7d8);
                    /* WARNING: Subroutine does not return */
  FUN_03f5c414(uVar7,uVar6);
}

