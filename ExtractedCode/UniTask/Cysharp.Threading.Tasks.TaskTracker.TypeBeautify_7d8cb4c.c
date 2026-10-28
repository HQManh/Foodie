// rea decompile_all
// name: Cysharp.Threading.Tasks.TaskTracker$$TypeBeautify
// address: 0x7d8cb4c
// body: available
// range: 0x7d8cb4c-0x7d8cdbf inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x7d8cdb4 to 0x743e010 System.Text.StringBuilder$$Append (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x7d8cdb8 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7d8cdbc to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void Cysharp_Threading_Tasks_TaskTracker__TypeBeautify(long *param_1,long param_2)

{
  int iVar1;
  ulong uVar2;
  long *plVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  bool bVar8;
  
  if ((DAT_09525d40 & 1) == 0) {
    FUN_03f5c2a4(&DAT_0918b928);
    FUN_03f5c2a4(&DAT_09216f38);
    FUN_03f5c2a4(&DAT_091fa158);
    FUN_03f5c2a4(&DAT_091f86e8);
    FUN_03f5c2a4(&DAT_091fad68);
    FUN_03f5c2a4(&DAT_091f8f68);
    DAT_09525d40 = 1;
  }
  if (param_1 != (long *)0x0) {
    uVar2 = System_Type__get_IsNested(param_1,0);
    if ((uVar2 & 1) != 0) {
      plVar3 = (long *)(**(code **)(*param_1 + 0x1c8))(param_1,*(undefined8 *)(*param_1 + 0x1d0));
      if (((plVar3 == (long *)0x0) ||
          (plVar3 = (long *)(**(code **)(*plVar3 + 0x1b8))(plVar3,*(undefined8 *)(*plVar3 + 0x1c0)),
          plVar3 == (long *)0x0)) ||
         (uVar4 = (**(code **)(*plVar3 + 0x168))(plVar3,*(undefined8 *)(*plVar3 + 0x170)),
         param_2 == 0)) goto LAB_07d8cdbc;
      System_Text_StringBuilder__Append(param_2,uVar4,0);
      System_Text_StringBuilder__Append(param_2,DAT_091f8f68,0);
    }
    uVar2 = (**(code **)(*param_1 + 0x3d8))(param_1,*(undefined8 *)(*param_1 + 0x3e0));
    lVar5 = (**(code **)(*param_1 + 0x1b8))(param_1,*(undefined8 *)(*param_1 + 0x1c0));
    if ((uVar2 & 1) == 0) {
      if (param_2 != 0) {
LAB_07d8cda0:
        System_Text_StringBuilder__Append(param_2,lVar5,0);
        return;
      }
    }
    else if (lVar5 != 0) {
      iVar1 = System_String__IndexOf(lVar5,DAT_09216f38,0);
      lVar5 = (**(code **)(*param_1 + 0x1b8))(param_1,*(undefined8 *)(*param_1 + 0x1c0));
      if (iVar1 != -1) {
        if (lVar5 == 0) goto LAB_07d8cdbc;
        lVar5 = System_String__Substring(lVar5,0,iVar1,0);
      }
      if (param_2 != 0) {
        System_Text_StringBuilder__Append(param_2,lVar5,0);
        System_Text_StringBuilder__Append(param_2,DAT_091fa158,0);
        lVar6 = (**(code **)(*param_1 + 0x488))(param_1,*(undefined8 *)(*param_1 + 0x490));
        if (lVar6 != 0) {
          lVar5 = DAT_091fad68;
          if (0 < (int)*(ulong *)(lVar6 + 0x18)) {
            uVar2 = 0;
            uVar7 = *(ulong *)(lVar6 + 0x18) & 0xffffffff;
            bVar8 = true;
            do {
              if (uVar7 <= uVar2) {
                    /* WARNING: Subroutine does not return */
                FUN_03f5c558();
              }
              uVar4 = *(undefined8 *)(lVar6 + 0x20 + uVar2 * 8);
              if (!bVar8) {
                System_Text_StringBuilder__Append(param_2,DAT_091f86e8,0);
              }
              if (*(int *)(DAT_0918b928 + 0xe4) == 0) {
                FUN_03f5c424();
              }
              Cysharp_Threading_Tasks_TaskTracker__TypeBeautify(uVar4,param_2);
              uVar7 = (ulong)*(uint *)(lVar6 + 0x18);
              uVar2 = uVar2 + 1;
              bVar8 = false;
              lVar5 = DAT_091fad68;
            } while ((long)uVar2 < (long)(int)*(uint *)(lVar6 + 0x18));
          }
          goto LAB_07d8cda0;
        }
      }
    }
  }
LAB_07d8cdbc:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

