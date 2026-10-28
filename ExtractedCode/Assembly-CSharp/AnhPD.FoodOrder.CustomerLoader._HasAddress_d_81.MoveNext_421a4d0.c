// rea decompile_all
// name: AnhPD.FoodOrder.CustomerLoader.<HasAddress>d__81$$MoveNext
// address: 0x421a4d0
// body: available
// range: 0x421a4d0-0x421aa97 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x421aa90 to 0x3f5c548 FUN_03f5c548 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x421aa94 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x0421aa8c) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void AnhPD_FoodOrder_CustomerLoader_<HasAddress>d__81__MoveNext(int *param_1)

{
  int iVar1;
  undefined8 uVar2;
  ulong uVar3;
  undefined8 *puVar4;
  long *plVar5;
  long lVar6;
  undefined8 extraout_x1;
  long lVar7;
  ulong uVar8;
  int *piVar9;
  bool bVar10;
  undefined8 uVar11;
  undefined8 uStack_100;
  int local_f8;
  long *local_f0;
  undefined8 uStack_e8;
  ulong local_e0;
  long *local_d0;
  undefined8 uStack_c8;
  ulong local_c0;
  int local_ac;
  int *local_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  long *local_80;
  undefined8 uStack_78;
  ulong local_70;
  long *local_60;
  undefined8 uStack_58;
  ulong local_50;
  
  local_a8 = param_1;
  if ((DAT_09516cf5 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091bf6d0);
    FUN_03f5c2a4(&DAT_091bf668);
    FUN_03f5c2a4(&DAT_09180f88);
    FUN_03f5c2a4(&DAT_091975f8);
    FUN_03f5c2a4(&DAT_09197610);
    FUN_03f5c2a4(&DAT_09197618);
    FUN_03f5c2a4(&DAT_091983a8);
    FUN_03f5c2a4(&DAT_091985d0);
    FUN_03f5c2a4(&DAT_091751c8);
    FUN_03f5c2a4(&DAT_0919a470);
    FUN_03f5c2a4(&DAT_0919a478);
    FUN_03f5c2a4(&DAT_09171908);
    FUN_03f5c2a4(&DAT_0917a090);
    FUN_03f5c2a4(&DAT_091bdd00);
    DAT_09516cf5 = 1;
  }
  uVar2 = DAT_09171908;
  local_ac = *param_1;
  local_d0 = (long *)0x0;
  uStack_c8 = 0;
  local_c0 = 0;
  local_f0 = (long *)0x0;
  uStack_e8 = 0;
  local_e0 = 0;
  local_f8 = 0;
  if (local_ac == 0) {
LAB_0421a7b0:
    local_ac = -1;
    uStack_c8 = *(undefined8 *)(local_a8 + 0x14);
    local_d0 = *(long **)(local_a8 + 0x12);
    local_c0 = *(ulong *)(local_a8 + 0x16);
    local_a8[0x12] = 0;
    local_a8[0x13] = 0;
    local_a8[0x14] = 0;
    local_a8[0x15] = 0;
    local_a8[0x16] = 0;
    local_a8[0x17] = 0;
    *local_a8 = -1;
  }
  else {
    uVar11 = *(undefined8 *)(param_1 + 8);
    if (*(int *)(DAT_095354b8 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar2 = System_Type__GetTypeFromHandle(uVar2,0);
    if (*(int *)(DAT_09180f88 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    UnityEngine_AddressableAssets_Addressables__LoadResourceLocationsAsync(&local_80,uVar11,uVar2,0)
    ;
    uStack_58 = uStack_78;
    local_60 = local_80;
    local_50 = local_70;
    *(undefined8 *)(local_a8 + 0xe) = uStack_78;
    *(long **)(local_a8 + 0xc) = local_80;
    *(ulong *)(local_a8 + 0x10) = local_70;
    thunk_FUN_03f5d7b8(local_a8 + 0xc,0);
    if (local_ac == 0) goto LAB_0421a7b0;
    uStack_98 = *(undefined8 *)(local_a8 + 0xe);
    local_a0 = *(undefined8 *)(local_a8 + 0xc);
    local_90 = *(undefined8 *)(local_a8 + 0x10);
    FUN_04b722fc(&local_60,&local_a0,0,8,*(undefined8 *)(local_a8 + 10),0,0,DAT_091bf6d0);
    local_e0 = local_50;
    uStack_e8 = uStack_58;
    uStack_58 = 0;
    local_50 = 0;
    local_f0 = local_60;
    local_60 = (long *)0x0;
    if ((*(byte *)(*(long *)(DAT_091bdd00 + 0x20) + 0x135) & 1) == 0) {
      FUN_03f95a6c();
    }
    uStack_58 = uStack_e8;
    local_60 = local_f0;
    local_50 = local_e0;
    thunk_FUN_03f5d7b8(&local_60,0);
    uStack_c8 = uStack_58;
    local_d0 = local_60;
    local_c0 = local_50;
    uVar3 = FUN_041e5390(&local_d0,DAT_0919a478);
    if ((uVar3 & 1) == 0) {
      local_ac = 0;
      *local_a8 = 0;
      *(undefined8 *)(local_a8 + 0x14) = uStack_c8;
      *(long **)(local_a8 + 0x12) = local_d0;
      *(ulong *)(local_a8 + 0x16) = local_c0;
      thunk_FUN_03f5d7b8(local_a8 + 0x12,0);
      piVar9 = local_a8;
      if (*(int *)(DAT_091751c8 + 0xe4) == 0) {
        FUN_03f5c424(DAT_091751c8,extraout_x1,local_a8);
      }
      FUN_045d2630(piVar9 + 2,&local_d0,local_a8,DAT_091983a8);
      bVar10 = false;
      iVar1 = 5;
      goto LAB_0421a94c;
    }
  }
  plVar5 = local_d0;
  if (local_d0 != (long *)0x0) {
    uVar3 = local_c0 & 0xffff;
    lVar6 = *(long *)(DAT_0919a470 + 0x20);
    if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
      lVar6 = FUN_03f95a6c();
    }
    lVar6 = *(long *)(*(long *)(lVar6 + 0xc0) + 0x28);
    if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
      lVar6 = FUN_03f95a6c(lVar6);
    }
    lVar7 = *plVar5;
    uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar8 != 0) {
      piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == lVar6) {
          puVar4 = (undefined8 *)(lVar7 + (long)*piVar9 * 0x10 + 0x138);
          goto LAB_0421a86c;
        }
        uVar8 = uVar8 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar8 != 0);
    }
    puVar4 = (undefined8 *)FUN_03f95da8(plVar5,lVar6,0);
LAB_0421a86c:
    (*(code *)*puVar4)(plVar5,uVar3,puVar4[1]);
  }
  iVar1 = FUN_0640f818(local_a8 + 0xc,DAT_09197618);
  if ((iVar1 == 1) && (lVar6 = FUN_0640f7ac(local_a8 + 0xc,DAT_09197610), lVar6 != 0)) {
    plVar5 = (long *)FUN_0640f7ac(local_a8 + 0xc,DAT_09197610);
    if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    lVar6 = *plVar5;
    uVar3 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar3 != 0) {
      piVar9 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == DAT_0917a090) {
          puVar4 = (undefined8 *)(lVar6 + (long)*piVar9 * 0x10 + 0x138);
          goto LAB_0421a930;
        }
        uVar3 = uVar3 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar3 != 0);
    }
    puVar4 = (undefined8 *)FUN_03f95da8(plVar5,DAT_0917a090,0);
LAB_0421a930:
    iVar1 = (*(code *)*puVar4)(plVar5,puVar4[1]);
    bVar10 = 0 < iVar1;
  }
  else {
    bVar10 = false;
  }
  iVar1 = 8;
LAB_0421a94c:
  if ((local_ac < 0) && (uVar3 = FUN_0640f598(local_a8 + 0xc,DAT_091975f8), (uVar3 & 1) != 0)) {
    uStack_78 = *(undefined8 *)(local_a8 + 0xe);
    local_80 = *(long **)(local_a8 + 0xc);
    local_70 = *(ulong *)(local_a8 + 0x10);
    if (*(int *)(DAT_09180f88 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uStack_58 = uStack_78;
    local_60 = local_80;
    local_50 = local_70;
    FUN_04b71ee0(&local_60,DAT_091bf668);
  }
  piVar9 = local_a8;
  if (iVar1 == 8) {
    *local_a8 = -2;
    lVar6 = DAT_091751c8;
    local_a8[0xe] = 0;
    local_a8[0xf] = 0;
    local_a8[0x10] = 0;
    local_a8[0x11] = 0;
    local_a8[0xc] = 0;
    local_a8[0xd] = 0;
    if (*(int *)(lVar6 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    FUN_069f2e3c(piVar9 + 2,bVar10,DAT_091985d0);
  }
  else if (iVar1 == 0) {
    *local_a8 = -2;
    local_a8[0xe] = 0;
    local_a8[0xf] = 0;
    local_a8[0x10] = 0;
    local_a8[0x11] = 0;
    uVar2 = (&uStack_100)[local_f8 + -1];
    local_a8[0xc] = 0;
    local_a8[0xd] = 0;
    lVar6 = thunk_FUN_03fc39d4(&DAT_091751c8);
    if (*(int *)(lVar6 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar11 = thunk_FUN_03fc39d4(&DAT_091985c8);
    FUN_069f3088(piVar9 + 2,uVar2,uVar11);
  }
  return;
}

