// rea decompile_all
// name: System.Runtime.Serialization.SerializationInfo$$AddValueInternal
// address: 0x74b481c
// body: available
// range: 0x74b481c-0x74b49eb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x74b4988 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x74b498c to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x74b4998 to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x74b49e8 to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void System_Runtime_Serialization_SerializationInfo__AddValueInternal
               (long param_1,undefined8 param_2,long param_3,long param_4)

{
  uint uVar1;
  ulong uVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  long *plVar7;
  
  if ((DAT_0952143d & 1) == 0) {
    FUN_03f5c2a4(&DAT_0919f990);
    FUN_03f5c2a4(&DAT_0919f9a0);
    DAT_0952143d = 1;
  }
  if (*(long *)(param_1 + 0x28) != 0) {
    uVar2 = FUN_06fca63c(*(long *)(param_1 + 0x28),param_2,DAT_0919f9a0);
    if ((uVar2 & 1) != 0) {
      uVar4 = thunk_FUN_03fc39d4(&DAT_091fd958);
      uVar4 = System_Environment__GetResourceString(uVar4,0);
      thunk_FUN_03fc39d4(&DAT_0918a948);
      uVar5 = thunk_FUN_03f9944c();
      System_Runtime_Serialization_SerializationException___ctor(uVar5,uVar4,0);
      uVar4 = thunk_FUN_03fc39d4(&DAT_091d89f8);
                    /* WARNING: Subroutine does not return */
      FUN_03f5c414(uVar5,uVar4);
    }
    if (*(long *)(param_1 + 0x28) != 0) {
      FUN_06fca448(*(long *)(param_1 + 0x28),param_2,*(undefined4 *)(param_1 + 0x30),DAT_0919f990);
      lVar6 = *(long *)(param_1 + 0x10);
      if (lVar6 != 0) {
        if (*(int *)(lVar6 + 0x18) <= *(int *)(param_1 + 0x30)) {
          System_Runtime_Serialization_SerializationInfo__ExpandArrays(param_1);
          lVar6 = *(long *)(param_1 + 0x10);
          if (lVar6 == 0) goto LAB_074b4988;
        }
        if (*(uint *)(param_1 + 0x30) < *(uint *)(lVar6 + 0x18)) {
          puVar3 = (undefined8 *)(lVar6 + (long)(int)*(uint *)(param_1 + 0x30) * 8 + 0x20);
          *puVar3 = param_2;
          thunk_FUN_03f5d7b8(puVar3,param_2);
          plVar7 = *(long **)(param_1 + 0x18);
          if (plVar7 == (long *)0x0) goto LAB_074b4988;
          uVar1 = *(uint *)(param_1 + 0x30);
          if ((param_3 != 0) &&
             (lVar6 = thunk_FUN_03f99350(param_3,*(undefined8 *)(*plVar7 + 0x40)), lVar6 == 0)) {
LAB_074b4990:
            uVar4 = thunk_FUN_03fa6ef4();
                    /* WARNING: Subroutine does not return */
            FUN_03f5c414(uVar4,0);
          }
          if (uVar1 < *(uint *)(plVar7 + 3)) {
            plVar7[(long)(int)uVar1 + 4] = param_3;
            thunk_FUN_03f5d7b8(plVar7 + (long)(int)uVar1 + 4,param_3);
            plVar7 = *(long **)(param_1 + 0x20);
            if (plVar7 == (long *)0x0) goto LAB_074b4988;
            uVar1 = *(uint *)(param_1 + 0x30);
            if ((param_4 != 0) &&
               (lVar6 = thunk_FUN_03f99350(param_4,*(undefined8 *)(*plVar7 + 0x40)), lVar6 == 0))
            goto LAB_074b4990;
            if (uVar1 < *(uint *)(plVar7 + 3)) {
              plVar7[(long)(int)uVar1 + 4] = param_4;
              thunk_FUN_03f5d7b8(plVar7 + (long)(int)uVar1 + 4,param_4);
              *(int *)(param_1 + 0x30) = *(int *)(param_1 + 0x30) + 1;
              return;
            }
          }
        }
                    /* WARNING: Subroutine does not return */
        FUN_03f5c558();
      }
    }
  }
LAB_074b4988:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

