// rea decompile_all
// name: System.Runtime.Serialization.FormatterServices$$GetClrTypeFullNameForNonArrayTypes
// address: 0x74adf28
// body: available
// range: 0x74adf28-0x74ae197 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x74ae190 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x74ae194 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void System_Runtime_Serialization_FormatterServices__GetClrTypeFullNameForNonArrayTypes
               (long *param_1)

{
  int iVar1;
  ulong uVar2;
  long *plVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  code *UNRECOVERED_JUMPTABLE;
  long lVar8;
  ulong uVar9;
  undefined1 local_54 [4];
  
  if ((DAT_09521405 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09184940);
    FUN_03f5c2a4(&DAT_0918b348);
    FUN_03f5c2a4(&DAT_091f86e8);
    FUN_03f5c2a4(&DAT_09214830);
    FUN_03f5c2a4(&DAT_092139f8);
    FUN_03f5c2a4(&DAT_09214720);
    DAT_09521405 = 1;
  }
  local_54[0] = 0;
  if (param_1 != (long *)0x0) {
    uVar2 = (**(code **)(*param_1 + 0x3d8))(param_1,*(undefined8 *)(*param_1 + 0x3e0));
    lVar8 = *param_1;
    if ((uVar2 & 1) == 0) {
      uVar4 = *(undefined8 *)(lVar8 + 0x300);
      UNRECOVERED_JUMPTABLE = *(code **)(lVar8 + 0x2f8);
LAB_074ae174:
                    /* WARNING: Could not recover jumptable at 0x074ae18c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*UNRECOVERED_JUMPTABLE)(param_1,uVar4);
      return;
    }
    lVar8 = (**(code **)(lVar8 + 0x488))(param_1,*(undefined8 *)(lVar8 + 0x490));
    plVar3 = (long *)(**(code **)(*param_1 + 0x468))(param_1,*(undefined8 *)(*param_1 + 0x470));
    if (plVar3 != (long *)0x0) {
      uVar4 = (**(code **)(*plVar3 + 0x2f8))(plVar3,*(undefined8 *)(*plVar3 + 0x300));
      lVar5 = thunk_FUN_03f9944c(DAT_0918b348);
      System_Text_StringBuilder___ctor(lVar5,uVar4,0);
      if (lVar5 != 0) {
        lVar5 = System_Text_StringBuilder__Append(lVar5,DAT_092139f8,0);
        if (lVar8 != 0) {
          if (0 < (int)*(ulong *)(lVar8 + 0x18)) {
            uVar2 = 0;
            uVar9 = *(ulong *)(lVar8 + 0x18) & 0xffffffff;
            do {
              if (uVar9 <= uVar2) {
                    /* WARNING: Subroutine does not return */
                FUN_03f5c558();
              }
              if (lVar5 == 0) goto LAB_074ae190;
              uVar4 = *(undefined8 *)(lVar8 + 0x20 + uVar2 * 8);
              lVar6 = System_Text_StringBuilder__Append(lVar5,DAT_092139f8,0);
              if (*(int *)(DAT_09184940 + 0xe4) == 0) {
                FUN_03f5c424(DAT_09184940);
              }
              uVar7 = System_Runtime_Serialization_FormatterServices__GetClrTypeFullName(uVar4);
              if ((lVar6 == 0) ||
                 (lVar6 = System_Text_StringBuilder__Append(lVar6,uVar7,0), lVar6 == 0))
              goto LAB_074ae190;
              System_Text_StringBuilder__Append(lVar6,DAT_091f86e8,0);
              uVar4 = System_Runtime_Serialization_FormatterServices__GetClrAssemblyName
                                (uVar4,local_54);
              lVar6 = System_Text_StringBuilder__Append(lVar5,uVar4,0);
              if (lVar6 == 0) goto LAB_074ae190;
              System_Text_StringBuilder__Append(lVar6,DAT_09214830,0);
              uVar9 = (ulong)*(uint *)(lVar8 + 0x18);
              uVar2 = uVar2 + 1;
            } while ((long)uVar2 < (long)(int)*(uint *)(lVar8 + 0x18));
          }
          if (lVar5 != 0) {
            iVar1 = System_Text_StringBuilder__get_Length(lVar5,0);
            lVar8 = System_Text_StringBuilder__Remove(lVar5,iVar1 + -1,1,0);
            if ((lVar8 != 0) &&
               (param_1 = (long *)System_Text_StringBuilder__Append(lVar8,DAT_09214720,0),
               param_1 != (long *)0x0)) {
              UNRECOVERED_JUMPTABLE = *(code **)(*param_1 + 0x168);
              uVar4 = *(undefined8 *)(*param_1 + 0x170);
              goto LAB_074ae174;
            }
          }
        }
      }
    }
  }
LAB_074ae190:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

