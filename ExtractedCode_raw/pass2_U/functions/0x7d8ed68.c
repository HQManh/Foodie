// rea decompile_all
// name: Cysharp.Threading.Tasks.PlayerLoopHelper$$DumpCurrentPlayerLoop
// address: 0x7d8ed68
// body: available
// range: 0x7d8ed68-0x7d8f033 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x7d8f02c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7d8f030 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void Cysharp_Threading_Tasks_PlayerLoopHelper__DumpCurrentPlayerLoop(void)

{
  uint uVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  undefined8 uVar5;
  long *plVar6;
  ulong uVar7;
  long lVar8;
  ulong uVar9;
  uint uVar10;
  undefined1 auStack_c0 [8];
  long local_b8;
  undefined4 local_94;
  long *local_90;
  long *plStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 local_70;
  
  if ((DAT_09525d55 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091835d0);
    FUN_03f5c2a4(&DAT_0918b348);
    FUN_03f5c2a4(&DAT_09226278);
    FUN_03f5c2a4(&DAT_09226038);
    FUN_03f5c2a4(&DAT_09208148);
    FUN_03f5c2a4(&DAT_091f8b18);
    FUN_03f5c2a4(&DAT_0920a970);
    DAT_09525d55 = 1;
  }
  local_70 = 0;
  local_94 = 0;
  plStack_88 = (long *)0x0;
  local_90 = (long *)0x0;
  uStack_78 = 0;
  uStack_80 = 0;
  UnityEngine_LowLevel_PlayerLoop__GetCurrentPlayerLoop(auStack_c0,0);
  plVar4 = (long *)thunk_FUN_03f9944c(DAT_0918b348);
  System_Text_StringBuilder___ctor(plVar4,0);
  if ((plVar4 != (long *)0x0) &&
     (System_Text_StringBuilder__AppendLine(plVar4,DAT_0920a970,0), local_b8 != 0)) {
    if (0 < (int)*(ulong *)(local_b8 + 0x18)) {
      uVar9 = 0;
      uVar7 = *(ulong *)(local_b8 + 0x18) & 0xffffffff;
      do {
        if (uVar7 <= uVar9) {
LAB_07d8f030:
                    /* WARNING: Subroutine does not return */
          FUN_03f5c558();
        }
        lVar8 = local_b8 + uVar9 * 0x28;
        plStack_88 = *(long **)(lVar8 + 0x28);
        local_90 = *(long **)(lVar8 + 0x20);
        uStack_78 = *(undefined8 *)(lVar8 + 0x38);
        uStack_80 = *(undefined8 *)(lVar8 + 0x30);
        local_70 = *(undefined8 *)(lVar8 + 0x40);
        if (local_90 == (long *)0x0) goto LAB_07d8f02c;
        uVar5 = (**(code **)(*local_90 + 0x1b8))(local_90,*(undefined8 *)(*local_90 + 0x1c0));
        System_Text_StringBuilder__AppendFormat(plVar4,DAT_091f8b18,uVar5,0);
        System_Text_StringBuilder__AppendLine(plVar4,0);
        plVar3 = plStack_88;
        if (plStack_88 == (long *)0x0) {
          uVar5 = UnityEngine_LowLevel_PlayerLoopSystem__ToString(&local_90,0);
          System_Text_StringBuilder__AppendFormat(plVar4,DAT_09226278,uVar5,0);
          System_Text_StringBuilder__AppendLine(plVar4,0);
        }
        else {
          uVar1 = *(uint *)(plStack_88 + 3);
          if (0 < (int)uVar1) {
            uVar10 = 0;
            plVar2 = plStack_88;
            do {
              if (uVar1 <= uVar10) goto LAB_07d8f030;
              plVar6 = (long *)plVar2[4];
              if (plVar6 == (long *)0x0) goto LAB_07d8f02c;
              lVar8 = plVar2[5];
              uVar5 = (**(code **)(*plVar6 + 0x1b8))(plVar6,*(undefined8 *)(*plVar6 + 0x1c0));
              System_Text_StringBuilder__AppendFormat(plVar4,DAT_09226038,uVar5,0);
              System_Text_StringBuilder__AppendLine(plVar4,0);
              if (lVar8 != 0) {
                local_94 = (undefined4)*(undefined8 *)(lVar8 + 0x18);
                uVar5 = System_Int32__ToString(&local_94,0);
                uVar5 = System_String__Concat(DAT_09208148,uVar5,0);
                if (*(int *)(DAT_091835d0 + 0xe4) == 0) {
                  FUN_03f5c424(DAT_091835d0);
                }
                UnityEngine_Debug__LogWarning(uVar5,0);
              }
              uVar1 = *(uint *)(plVar3 + 3);
              uVar10 = uVar10 + 1;
              plVar2 = plVar2 + 5;
            } while ((int)uVar10 < (int)uVar1);
          }
        }
        uVar7 = (ulong)*(uint *)(local_b8 + 0x18);
        uVar9 = uVar9 + 1;
      } while ((long)uVar9 < (long)(int)*(uint *)(local_b8 + 0x18));
    }
    uVar5 = (**(code **)(*plVar4 + 0x168))(plVar4,*(undefined8 *)(*plVar4 + 0x170));
    if (*(int *)(DAT_091835d0 + 0xe4) == 0) {
      FUN_03f5c424(DAT_091835d0);
    }
    UnityEngine_Debug__Log(uVar5,0);
    return;
  }
LAB_07d8f02c:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

