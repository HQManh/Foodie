// rea decompile_all
// name: _GAME.Profile.ProfileServer.<ReadProfileEnvelope>d__5$$MoveNext
// address: 0x77b9898
// body: available
// range: 0x77b9898-0x77b9bd3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x77b9bd0 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void _GAME_Profile_ProfileServer_<ReadProfileEnvelope>d__5__MoveNext(int *param_1)

{
  ulong uVar1;
  long lVar2;
  undefined8 *puVar3;
  long lVar4;
  ulong uVar5;
  int *piVar6;
  long *plVar7;
  long *local_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  long *local_60;
  long lStack_58;
  ulong local_50;
  long *local_40;
  long lStack_38;
  ulong local_30;
  undefined8 uStack_28;
  
  if ((DAT_09522eca & 1) == 0) {
    FUN_03f5c2a4(&DAT_09199d20);
    FUN_03f5c2a4(&DAT_09199d50);
    FUN_03f5c2a4(&DAT_0919a6d0);
    FUN_03f5c2a4(&DAT_0919a6d8);
    FUN_03f5c2a4(&DAT_091bdef0);
    DAT_09522eca = 1;
  }
  local_60 = (long *)0x0;
  lStack_58 = 0;
  local_50 = 0;
  if (*param_1 == 0) {
    local_50 = *(ulong *)(param_1 + 0x16);
    lStack_58 = *(long *)(param_1 + 0x14);
    local_60 = *(long **)(param_1 + 0x12);
    param_1[0x14] = 0;
    param_1[0x15] = 0;
    param_1[0x16] = 0;
    param_1[0x17] = 0;
    param_1[0x12] = 0;
    param_1[0x13] = 0;
    *param_1 = -1;
  }
  else {
    _GAME_Profile_ProfileServer__ReadProfileDetailed
              (&local_40,*(undefined8 *)(param_1 + 0xe),(char)param_1[0x10]);
    uVar1 = local_30;
    lVar2 = lStack_38;
    plVar7 = local_40;
    lStack_38 = 0;
    local_30 = 0;
    local_40 = (long *)0x0;
    if ((*(byte *)(*(long *)(DAT_091bdef0 + 0x20) + 0x135) & 1) == 0) {
      FUN_03f95a6c();
    }
    local_40 = plVar7;
    lStack_38 = lVar2;
    local_30 = uVar1;
    thunk_FUN_03f5d7b8(&local_40,0);
    lStack_58 = lStack_38;
    local_60 = local_40;
    local_50 = local_30;
    uVar1 = FUN_041e5390(&local_60,DAT_0919a6d8);
    if ((uVar1 & 1) == 0) {
      *param_1 = 0;
      *(long *)(param_1 + 0x14) = lStack_58;
      *(long **)(param_1 + 0x12) = local_60;
      *(ulong *)(param_1 + 0x16) = local_50;
      thunk_FUN_03f5d7b8(param_1 + 0x12,0);
      FUN_0479581c(param_1 + 2,&local_60,param_1,DAT_09199d20);
      return;
    }
  }
  plVar7 = local_60;
  lVar2 = lStack_58;
  if (local_60 != (long *)0x0) {
    uVar1 = local_50 & 0xffff;
    lVar2 = *(long *)(DAT_0919a6d0 + 0x20);
    if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
      lVar2 = FUN_03f95a6c();
    }
    lVar2 = *(long *)(*(long *)(lVar2 + 0xc0) + 0x28);
    if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
      lVar2 = FUN_03f95a6c(lVar2);
    }
    lVar4 = *plVar7;
    uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar5 != 0) {
      piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) == lVar2) {
          puVar3 = (undefined8 *)(lVar4 + (long)*piVar6 * 0x10 + 0x138);
          goto LAB_077b9aa0;
        }
        uVar5 = uVar5 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar5 != 0);
    }
    puVar3 = (undefined8 *)FUN_03f95da8(plVar7,lVar2,0);
LAB_077b9aa0:
    lVar2 = (*(code *)*puVar3)(plVar7,uVar1,puVar3[1]);
  }
  if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  if (((*(char *)(lVar2 + 0x10) == '\0') || (*(int *)(lVar2 + 0x14) != 0)) ||
     ((*(long *)(lVar2 + 0x40) == 0 && (*(long *)(lVar2 + 0x18) == 0)))) {
    uStack_a8 = 0;
    local_b0 = (long *)0x0;
    uStack_98 = 0;
    uStack_a0 = 0;
  }
  else {
    uStack_a8 = *(undefined8 *)(lVar2 + 0x48);
    local_b0 = *(long **)(lVar2 + 0x40);
    uStack_98 = *(undefined8 *)(lVar2 + 0x58);
    uStack_a0 = *(undefined8 *)(lVar2 + 0x50);
  }
  plVar7 = *(long **)(param_1 + 2);
  *param_1 = -2;
  if (plVar7 == (long *)0x0) {
    *(undefined8 *)(param_1 + 8) = uStack_a8;
    *(long **)(param_1 + 6) = local_b0;
    *(undefined8 *)(param_1 + 0xc) = uStack_98;
    *(undefined8 *)(param_1 + 10) = uStack_a0;
    thunk_FUN_03f5d7b8(param_1 + 6,0);
  }
  else {
    lVar2 = *(long *)(DAT_09199d50 + 0x20);
    if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
      lVar2 = FUN_03f95a6c();
    }
    lVar2 = *(long *)(*(long *)(lVar2 + 0xc0) + 8);
    if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
      lVar2 = FUN_03f95a6c(lVar2);
    }
    lVar4 = *plVar7;
    uVar1 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar1 != 0) {
      piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) == lVar2) {
          puVar3 = (undefined8 *)(lVar4 + (long)(*piVar6 + 2) * 0x10 + 0x138);
          goto LAB_077b9ba4;
        }
        uVar1 = uVar1 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar1 != 0);
    }
    puVar3 = (undefined8 *)FUN_03f95da8(plVar7,lVar2,2);
LAB_077b9ba4:
    lStack_38 = uStack_a8;
    local_40 = local_b0;
    uStack_28 = uStack_98;
    local_30 = uStack_a0;
    (*(code *)*puVar3)(plVar7,&local_40,puVar3[1]);
  }
  return;
}

