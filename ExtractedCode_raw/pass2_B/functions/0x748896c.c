// rea decompile_all
// name: System.Runtime.Remoting.Services.TrackingServices$$NotifyMarshaledObject
// address: 0x748896c
// body: available
// range: 0x748896c-0x7488c23 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x7488c00 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7488c04 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7488c0c to 0x3f5c548 FUN_03f5c548 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7488c10 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7488c14 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7488c20 to 0x3f5c8d0 FUN_03f5c8d0 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x07488c08) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void System_Runtime_Remoting_Services_TrackingServices__NotifyMarshaledObject
               (undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  long *plVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  undefined8 *puVar7;
  ulong uVar8;
  int *piVar9;
  uint uVar10;
  uint uVar11;
  char local_44 [4];
  
  if ((DAT_095212cf & 1) == 0) {
    FUN_03f5c2a4(&DAT_09180108);
    FUN_03f5c2a4(&DAT_09171d90);
    FUN_03f5c2a4(&DAT_09186868);
    FUN_03f5c2a4(&DAT_0918bfe0);
    DAT_095212cf = 1;
  }
  local_44[0] = '\0';
  if (*(int *)(DAT_0918bfe0 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  plVar2 = (long *)**(long **)(DAT_0918bfe0 + 0xb8);
  if (plVar2 != (long *)0x0) {
    uVar3 = (**(code **)(*plVar2 + 0x2d8))(plVar2,*(undefined8 *)(*plVar2 + 0x2e0));
    local_44[0] = '\0';
    System_Threading_Monitor__Enter(uVar3,local_44,0);
    if (*(int *)(DAT_0918bfe0 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    plVar2 = (long *)**(long **)(DAT_0918bfe0 + 0xb8);
    if (plVar2 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    iVar1 = (**(code **)(*plVar2 + 0x298))(plVar2,*(undefined8 *)(*plVar2 + 0x2a0));
    if (iVar1 == 0) {
      lVar6 = 0;
      uVar10 = 3;
    }
    else {
      if (*(int *)(DAT_0918bfe0 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      uVar4 = DAT_09171d90;
      plVar2 = (long *)**(undefined8 **)(DAT_0918bfe0 + 0xb8);
      if (*(int *)(DAT_095354b8 + 0xe4) == 0) {
        FUN_03f5c424(DAT_095354b8);
      }
      uVar4 = System_Type__GetTypeFromHandle(uVar4,0);
      if (plVar2 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550(uVar4,uVar4);
      }
      lVar5 = (**(code **)(*plVar2 + 0x428))(plVar2,uVar4,*(undefined8 *)(*plVar2 + 0x430));
      uVar4 = DAT_09180108;
      if (lVar5 == 0) {
        lVar6 = 0;
      }
      else {
        lVar6 = thunk_FUN_03f99350(lVar5,DAT_09180108);
        if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c8d0(lVar5,uVar4);
        }
      }
      uVar10 = 4;
    }
    if (local_44[0] != '\0') {
      System_Threading_Monitor__Exit(uVar3,0);
    }
    if ((uVar10 | 4) == 4) {
      if (lVar6 == 0) goto LAB_07488c00;
      uVar10 = *(uint *)(lVar6 + 0x18);
      if (0 < (int)uVar10) {
        uVar11 = 0;
        do {
          if (uVar10 <= uVar11) {
                    /* WARNING: Subroutine does not return */
            FUN_03f5c558();
          }
          plVar2 = *(long **)(lVar6 + (long)(int)uVar11 * 8 + 0x20);
          if (plVar2 == (long *)0x0) goto LAB_07488c00;
          lVar5 = *plVar2;
          uVar8 = (ulong)*(ushort *)(lVar5 + 0x12e);
          if (uVar8 != 0) {
            piVar9 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
            do {
              if (*(long *)(piVar9 + -2) == DAT_09186868) {
                puVar7 = (undefined8 *)(lVar5 + (long)(*piVar9 + 1) * 0x10 + 0x138);
                goto LAB_07488bc4;
              }
              uVar8 = uVar8 - 1;
              piVar9 = piVar9 + 4;
            } while (uVar8 != 0);
          }
          puVar7 = (undefined8 *)FUN_03f95da8(plVar2,DAT_09186868,1);
LAB_07488bc4:
          (*(code *)*puVar7)(plVar2,param_1,param_2,puVar7[1]);
          uVar10 = *(uint *)(lVar6 + 0x18);
          uVar11 = uVar11 + 1;
        } while ((int)uVar11 < (int)uVar10);
      }
    }
    return;
  }
LAB_07488c00:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

