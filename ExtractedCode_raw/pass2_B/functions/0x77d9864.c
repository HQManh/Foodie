// rea decompile_all
// name: _GAME.BaseGame.WebService.<IsActive>d__3$$MoveNext
// address: 0x77d9864
// body: available
// range: 0x77d9864-0x77d9b5b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void _GAME_BaseGame_WebService_<IsActive>d__3__MoveNext(int *param_1)

{
  undefined2 uVar1;
  byte bVar2;
  undefined8 uVar3;
  ulong uVar4;
  long lVar5;
  undefined8 *puVar6;
  long lVar7;
  int *piVar8;
  long *plVar9;
  undefined1 auVar10 [16];
  undefined1 local_40 [16];
  undefined1 local_30 [16];
  
  if ((DAT_09523006 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09199848);
    FUN_03f5c2a4(&DAT_09199a20);
    FUN_03f5c2a4(&DAT_0919a580);
    FUN_03f5c2a4(&DAT_0919a588);
    FUN_03f5c2a4(&DAT_091bddd8);
    FUN_03f5c2a4(&DAT_0918cfb8);
    FUN_03f5c2a4(&DAT_0921cff0);
    FUN_03f5c2a4(&DAT_091f5700);
    DAT_09523006 = 1;
  }
  local_40._0_8_ = 0;
  local_40._8_8_ = 0;
  if (*param_1 == 0) {
    local_40 = *(undefined1 (*) [16])(param_1 + 8);
    param_1[8] = 0;
    param_1[9] = 0;
    param_1[10] = 0;
    param_1[0xb] = 0;
    *param_1 = -1;
  }
  else {
    uVar3 = thunk_FUN_03f9944c(DAT_0918cfb8);
    _GAME_BaseGame_WebRequestModel___ctor(uVar3,DAT_0921cff0,0,3,DAT_091f5700);
    auVar10 = _GAME_BaseGame_WebService__SendWebRequest(uVar3);
    local_30._0_8_ = 0;
    local_30._8_8_ = 0;
    if ((*(byte *)(*(long *)(DAT_091bddd8 + 0x20) + 0x135) & 1) == 0) {
      FUN_03f95a6c();
    }
    local_30 = auVar10;
    thunk_FUN_03f5d7b8(local_30,0);
    local_40 = local_30;
    uVar4 = FUN_0430cf0c(local_40,DAT_0919a588);
    if ((uVar4 & 1) == 0) {
      *param_1 = 0;
      *(undefined1 (*) [16])(param_1 + 8) = local_40;
      thunk_FUN_03f5d7b8(param_1 + 8,0);
      FUN_0478f80c(param_1 + 2,local_40,param_1,DAT_09199848);
      return;
    }
  }
  uVar3 = local_40._0_8_;
  if ((long *)local_40._0_8_ == (long *)0x0) {
    bVar2 = local_40[8] != '\0';
  }
  else {
    uVar1 = local_40._10_2_;
    lVar5 = *(long *)(DAT_0919a580 + 0x20);
    if ((*(ushort *)(lVar5 + 0x135) & 1) == 0) {
      lVar5 = FUN_03f95a6c();
    }
    lVar5 = *(long *)(*(long *)(lVar5 + 0xc0) + 0x28);
    if ((*(ushort *)(lVar5 + 0x135) & 1) == 0) {
      lVar5 = FUN_03f95a6c(lVar5);
    }
    lVar7 = *(long *)uVar3;
    uVar4 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar4 != 0) {
      piVar8 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == lVar5) {
          puVar6 = (undefined8 *)(lVar7 + (long)*piVar8 * 0x10 + 0x138);
          goto LAB_077d9a80;
        }
        uVar4 = uVar4 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar4 != 0);
    }
    puVar6 = (undefined8 *)FUN_03f95da8(uVar3,lVar5,0);
LAB_077d9a80:
    bVar2 = (*(code *)*puVar6)(uVar3,uVar1,puVar6[1]);
  }
  plVar9 = *(long **)(param_1 + 2);
  *param_1 = -2;
  if (plVar9 == (long *)0x0) {
    *(byte *)(param_1 + 6) = bVar2 & 1;
  }
  else {
    lVar5 = *(long *)(DAT_09199a20 + 0x20);
    if ((*(ushort *)(lVar5 + 0x135) & 1) == 0) {
      lVar5 = FUN_03f95a6c();
    }
    lVar5 = *(long *)(*(long *)(lVar5 + 0xc0) + 8);
    if ((*(ushort *)(lVar5 + 0x135) & 1) == 0) {
      lVar5 = FUN_03f95a6c(lVar5);
    }
    lVar7 = *plVar9;
    uVar4 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar4 != 0) {
      piVar8 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == lVar5) {
          puVar6 = (undefined8 *)(lVar7 + (long)(*piVar8 + 2) * 0x10 + 0x138);
          goto LAB_077d9b3c;
        }
        uVar4 = uVar4 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar4 != 0);
    }
    puVar6 = (undefined8 *)FUN_03f95da8(plVar9,lVar5,2);
LAB_077d9b3c:
    (*(code *)*puVar6)(plVar9,bVar2 & 1,puVar6[1]);
  }
  return;
}

