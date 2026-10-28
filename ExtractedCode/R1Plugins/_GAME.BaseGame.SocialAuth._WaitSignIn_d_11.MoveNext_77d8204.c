// rea decompile_all
// name: _GAME.BaseGame.SocialAuth.<WaitSignIn>d__11$$MoveNext
// address: 0x77d8204
// body: available
// range: 0x77d8204-0x77d85ef inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x77d85ec to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void _GAME_BaseGame_SocialAuth_<WaitSignIn>d__11__MoveNext(int *param_1)

{
  undefined8 uVar1;
  undefined2 uVar2;
  ushort uVar3;
  undefined8 uVar4;
  ulong uVar5;
  long lVar6;
  undefined8 *puVar7;
  long lVar8;
  int *piVar9;
  long *plVar10;
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 local_50 [16];
  undefined1 local_40 [16];
  
  if ((DAT_09522ff6 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09199788);
    FUN_03f5c2a4(&DAT_09199a20);
    FUN_03f5c2a4(&DAT_0919a4f0);
    FUN_03f5c2a4(&DAT_0919a4f8);
    FUN_03f5c2a4(&DAT_091835d0);
    FUN_03f5c2a4(&DAT_0918bd60);
    FUN_03f5c2a4(&DAT_091bdcc8);
    FUN_03f5c2a4(&DAT_091bdd48);
    FUN_03f5c2a4(&DAT_091ddb70);
    FUN_03f5c2a4(&DAT_0918c610);
    FUN_03f5c2a4(&DAT_091f69c8);
    FUN_03f5c2a4(&DAT_09214020);
    DAT_09522ff6 = 1;
  }
  local_50._0_8_ = 0;
  local_50._8_8_ = 0;
  if (*param_1 == 0) {
    local_50 = *(undefined1 (*) [16])(param_1 + 0xc);
    param_1[0xc] = 0;
    param_1[0xd] = 0;
    param_1[0xe] = 0;
    param_1[0xf] = 0;
    *param_1 = -1;
  }
  else {
    if (*(long *)(param_1 + 8) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    auVar11 = FUN_06439904(*(long *)(param_1 + 8),DAT_091bdcc8);
    if (*(int *)(DAT_0918bd60 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar4 = System_TimeSpan__FromSeconds(0x4024000000000000,0);
    if (*(int *)(DAT_0918c610 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    auVar12 = Cysharp_Threading_Tasks_UniTask__Delay(uVar4,2,8,0,0,0);
    auVar11 = FUN_04e23a98(auVar11._0_8_,auVar11._8_8_,auVar12._0_8_,auVar12._8_8_,DAT_091ddb70);
    local_40._0_8_ = 0;
    local_40._8_8_ = 0;
    if ((*(byte *)(*(long *)(DAT_091bdd48 + 0x20) + 0x135) & 1) == 0) {
      FUN_03f95a6c();
    }
    local_40 = auVar11;
    thunk_FUN_03f5d7b8(local_40,0);
    local_50 = local_40;
    uVar5 = FUN_06b7c3ac(local_50,DAT_0919a4f8);
    if ((uVar5 & 1) == 0) {
      *param_1 = 0;
      *(undefined1 (*) [16])(param_1 + 0xc) = local_50;
      thunk_FUN_03f5d7b8(param_1 + 0xc,0);
      FUN_0478d998(param_1 + 2,local_50,param_1,DAT_09199788);
      return;
    }
  }
  uVar1 = local_50._8_8_;
  uVar4 = local_50._0_8_;
  if ((long *)local_50._0_8_ == (long *)0x0) {
    uVar3 = local_50._8_2_;
    if ((uVar1 & 1) != 0) goto LAB_077d8510;
  }
  else {
    uVar2 = local_50._10_2_;
    lVar6 = *(long *)(DAT_0919a4f0 + 0x20);
    if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
      lVar6 = FUN_03f95a6c();
    }
    lVar6 = *(long *)(*(long *)(lVar6 + 0xc0) + 0x28);
    if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
      lVar6 = FUN_03f95a6c(lVar6);
    }
    lVar8 = *(long *)uVar4;
    uVar5 = (ulong)*(ushort *)(lVar8 + 0x12e);
    if (uVar5 != 0) {
      piVar9 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == lVar6) {
          puVar7 = (undefined8 *)(lVar8 + (long)*piVar9 * 0x10 + 0x138);
          goto LAB_077d84ac;
        }
        uVar5 = uVar5 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar5 != 0);
    }
    puVar7 = (undefined8 *)FUN_03f95da8(uVar4,lVar6,0);
LAB_077d84ac:
    uVar3 = (*(code *)*puVar7)(uVar4,uVar2,puVar7[1]);
    if ((uVar3 & 1) != 0) goto LAB_077d8510;
  }
  uVar4 = System_String__Concat(DAT_09214020,*(undefined8 *)(param_1 + 10),DAT_091f69c8,0);
  if (*(int *)(DAT_091835d0 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  UnityEngine_Debug__LogWarning(uVar4,0);
LAB_077d8510:
  plVar10 = *(long **)(param_1 + 2);
  *param_1 = -2;
  if (plVar10 == (long *)0x0) {
    *(bool *)(param_1 + 6) = (uVar3 & 0x101) == 0x101;
  }
  else {
    lVar6 = *(long *)(DAT_09199a20 + 0x20);
    if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
      lVar6 = FUN_03f95a6c();
    }
    lVar6 = *(long *)(*(long *)(lVar6 + 0xc0) + 8);
    if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
      lVar6 = FUN_03f95a6c(lVar6);
    }
    lVar8 = *plVar10;
    uVar5 = (ulong)*(ushort *)(lVar8 + 0x12e);
    if (uVar5 != 0) {
      piVar9 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == lVar6) {
          puVar7 = (undefined8 *)(lVar8 + (long)(*piVar9 + 2) * 0x10 + 0x138);
          goto LAB_077d85c4;
        }
        uVar5 = uVar5 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar5 != 0);
    }
    puVar7 = (undefined8 *)FUN_03f95da8(plVar10,lVar6,2);
LAB_077d85c4:
    (*(code *)*puVar7)(plVar10,(uVar3 & 0x101) == 0x101,puVar7[1]);
  }
  return;
}

