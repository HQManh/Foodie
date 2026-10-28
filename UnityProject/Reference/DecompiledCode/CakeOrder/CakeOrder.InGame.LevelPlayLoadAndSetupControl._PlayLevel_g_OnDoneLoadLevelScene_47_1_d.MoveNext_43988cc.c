// rea decompile_all
// name: CakeOrder.InGame.LevelPlayLoadAndSetupControl.<<PlayLevel>g__OnDoneLoadLevelScene|47_1>d$$MoveNext
// address: 0x43988cc
// body: available
// range: 0x43988cc-0x4398b8f inclusive
// range: 0x4398c0c-0x4398c0f inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x4398c0c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8
CakeOrder_InGame_LevelPlayLoadAndSetupControl_<<PlayLevel>g__OnDoneLoadLevelScene_47_1>d__MoveNext
          (long param_1)

{
  undefined2 uVar1;
  int iVar2;
  ulong uVar3;
  long lVar4;
  undefined8 *puVar5;
  ulong uVar6;
  int *piVar7;
  long lVar8;
  long *plVar9;
  undefined1 auVar10 [16];
  long *local_50;
  ulong uStack_48;
  
  if ((DAT_09517a7c & 1) == 0) {
    FUN_03f5c2a4(&DAT_091b4c28);
    FUN_03f5c2a4(&DAT_091b4c30);
    FUN_03f5c2a4(&DAT_0918c610);
    DAT_09517a7c = 1;
  }
  lVar8 = *(long *)(param_1 + 0x20);
  if (*(uint *)(param_1 + 0x10) < 2) {
    *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
    uVar3 = FUN_05a8f088(DAT_091b4c30);
    if ((uVar3 & 1) == 0) {
      *(undefined8 *)(param_1 + 0x18) = 0;
      thunk_FUN_03f5d7b8((undefined8 *)(param_1 + 0x18),0);
      *(undefined4 *)(param_1 + 0x10) = 1;
      return 1;
    }
    lVar4 = *(long *)(DAT_091b4c28 + 0x20);
    if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
      lVar4 = FUN_03f95a6c();
    }
    lVar4 = *(long *)(*(long *)(lVar4 + 0xc0) + 0x10);
    if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
      lVar4 = FUN_03f95a6c();
    }
    if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    *(undefined8 *)(lVar8 + 0x28) = **(undefined8 **)(lVar4 + 0xb8);
    thunk_FUN_03f5d7b8((undefined8 *)(lVar8 + 0x28));
    if (*(long *)(lVar8 + 0xb0) != 0) {
      return 0;
    }
    auVar10 = CakeOrder_InGame_LevelPlayLoadAndSetupControl__SetUpAfterSpawnLevelScene(lVar8);
    *(undefined1 (*) [16])(param_1 + 0x28) = auVar10;
    thunk_FUN_03f5d7b8((undefined1 (*) [16])(param_1 + 0x28),0);
  }
  else {
    if (*(uint *)(param_1 + 0x10) != 2) {
      return 0;
    }
    *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
  }
  if (*(int *)(DAT_0918c610 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  if (DAT_095162d5 == '\0') {
    FUN_03f5c2a4(&DAT_091868c0);
    DAT_095162d5 = '\x01';
  }
  plVar9 = *(long **)(param_1 + 0x28);
  if (plVar9 != (long *)0x0) {
    lVar8 = *plVar9;
    uVar1 = *(undefined2 *)(param_1 + 0x30);
    uVar3 = (ulong)*(ushort *)(lVar8 + 0x12e);
    if (uVar3 != 0) {
      piVar7 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == DAT_091868c0) {
          puVar5 = (undefined8 *)(lVar8 + (long)*piVar7 * 0x10 + 0x138);
          goto LAB_04398a8c;
        }
        uVar3 = uVar3 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar3 != 0);
    }
    puVar5 = (undefined8 *)FUN_03f95da8(plVar9,DAT_091868c0,0);
LAB_04398a8c:
    iVar2 = (*(code *)*puVar5)(plVar9,uVar1,puVar5[1]);
    if (iVar2 == 0) {
      *(undefined8 *)(param_1 + 0x18) = 0;
      thunk_FUN_03f5d7b8((undefined8 *)(param_1 + 0x18),0);
      *(undefined4 *)(param_1 + 0x10) = 2;
      return 1;
    }
  }
  if (*(int *)(DAT_0918c610 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uStack_48 = *(ulong *)(param_1 + 0x30);
  local_50 = *(long **)(param_1 + 0x28);
  thunk_FUN_03f5d7b8(&local_50,0);
  uVar3 = uStack_48;
  plVar9 = local_50;
  if (DAT_095162d6 == '\0') {
    FUN_03f5c2a4(&DAT_091868c0);
    DAT_095162d6 = '\x01';
  }
  if (plVar9 != (long *)0x0) {
    lVar8 = *plVar9;
    uVar6 = (ulong)*(ushort *)(lVar8 + 0x12e);
    if (uVar6 != 0) {
      piVar7 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == DAT_091868c0) {
          puVar5 = (undefined8 *)(lVar8 + (long)(*piVar7 + 2) * 0x10 + 0x138);
          goto LAB_04398b64;
        }
        uVar6 = uVar6 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar6 != 0);
    }
    puVar5 = (undefined8 *)FUN_03f95da8(plVar9,DAT_091868c0,2);
LAB_04398b64:
    (*(code *)*puVar5)(plVar9,uVar3 & 0xffffffff,puVar5[1]);
  }
  return 0;
}

