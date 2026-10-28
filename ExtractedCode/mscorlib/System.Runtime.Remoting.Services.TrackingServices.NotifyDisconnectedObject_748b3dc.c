// rea decompile_all
// name: System.Runtime.Remoting.Services.TrackingServices$$NotifyDisconnectedObject
// address: 0x748b3dc
// body: available
// range: 0x748b3dc-0x748b67f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x748b65c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x748b660 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x748b668 to 0x3f5c548 FUN_03f5c548 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x748b66c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x748b670 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x748b67c to 0x3f5c8d0 FUN_03f5c8d0 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x0748b664) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void System_Runtime_Remoting_Services_TrackingServices__NotifyDisconnectedObject(undefined8 param_1)

{
  int iVar1;
  long *plVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  undefined8 *puVar6;
  ulong uVar7;
  int *piVar8;
  uint uVar9;
  uint uVar10;
  char local_3c [4];
  undefined8 local_38;
  
  if ((DAT_095212d1 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09180108);
    FUN_03f5c2a4(&DAT_09171d90);
    FUN_03f5c2a4(&DAT_09186868);
    FUN_03f5c2a4(&DAT_0918bfe0);
    DAT_095212d1 = 1;
  }
  local_38 = 0;
  local_3c[0] = '\0';
  if (*(int *)(DAT_0918bfe0 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  plVar2 = (long *)**(long **)(DAT_0918bfe0 + 0xb8);
  if (plVar2 != (long *)0x0) {
    local_38 = (**(code **)(*plVar2 + 0x2d8))(plVar2,*(undefined8 *)(*plVar2 + 0x2e0));
    local_3c[0] = '\0';
    System_Threading_Monitor__Enter(local_38,local_3c,0);
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
      lVar5 = 0;
      uVar9 = 3;
    }
    else {
      if (*(int *)(DAT_0918bfe0 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      uVar3 = DAT_09171d90;
      plVar2 = (long *)**(undefined8 **)(DAT_0918bfe0 + 0xb8);
      if (*(int *)(DAT_095354b8 + 0xe4) == 0) {
        FUN_03f5c424(DAT_095354b8);
      }
      uVar3 = System_Type__GetTypeFromHandle(uVar3,0);
      if (plVar2 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550(uVar3,uVar3);
      }
      lVar4 = (**(code **)(*plVar2 + 0x428))(plVar2,uVar3,*(undefined8 *)(*plVar2 + 0x430));
      uVar3 = DAT_09180108;
      if (lVar4 == 0) {
        lVar5 = 0;
      }
      else {
        lVar5 = thunk_FUN_03f99350(lVar4,DAT_09180108);
        if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c8d0(lVar4,uVar3);
        }
      }
      uVar9 = 4;
    }
    if (local_3c[0] != '\0') {
      System_Threading_Monitor__Exit(local_38,0);
    }
    if ((uVar9 | 4) == 4) {
      if (lVar5 == 0) goto LAB_0748b65c;
      uVar9 = *(uint *)(lVar5 + 0x18);
      if (0 < (int)uVar9) {
        uVar10 = 0;
        do {
          if (uVar9 <= uVar10) {
                    /* WARNING: Subroutine does not return */
            FUN_03f5c558();
          }
          plVar2 = *(long **)(lVar5 + (long)(int)uVar10 * 8 + 0x20);
          if (plVar2 == (long *)0x0) goto LAB_0748b65c;
          lVar4 = *plVar2;
          uVar7 = (ulong)*(ushort *)(lVar4 + 0x12e);
          if (uVar7 != 0) {
            piVar8 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
            do {
              if (*(long *)(piVar8 + -2) == DAT_09186868) {
                puVar6 = (undefined8 *)(lVar4 + (long)*piVar8 * 0x10 + 0x138);
                goto LAB_0748b628;
              }
              uVar7 = uVar7 - 1;
              piVar8 = piVar8 + 4;
            } while (uVar7 != 0);
          }
          puVar6 = (undefined8 *)FUN_03f95da8(plVar2,DAT_09186868,0);
LAB_0748b628:
          (*(code *)*puVar6)(plVar2,param_1,puVar6[1]);
          uVar9 = *(uint *)(lVar5 + 0x18);
          uVar10 = uVar10 + 1;
        } while ((int)uVar10 < (int)uVar9);
      }
    }
    return;
  }
LAB_0748b65c:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

