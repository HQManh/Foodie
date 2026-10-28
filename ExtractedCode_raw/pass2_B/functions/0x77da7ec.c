// rea decompile_all
// name: _GAME.BaseGame.SOIAPConfig$$Pack
// address: 0x77da7ec
// body: available
// range: 0x77da7ec-0x77da967 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x77da960 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x77da964 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long _GAME_BaseGame_SOIAPConfig__Pack(undefined4 param_1,undefined4 param_2,long param_3)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  uint uVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  
  if ((DAT_0952300b & 1) == 0) {
    FUN_03f5c2a4(&DAT_09185298);
    FUN_03f5c2a4(&DAT_091afa48);
    FUN_03f5c2a4(&DAT_0918a440);
    DAT_0952300b = 1;
  }
  lVar6 = thunk_FUN_03f9944c(DAT_09185298);
  _GAME_BaseGame_IAPPackConfig___ctor();
  if (lVar6 != 0) {
    *(undefined4 *)(lVar6 + 0x10) = param_2;
    *(undefined4 *)(lVar6 + 0x14) = param_1;
    if (param_3 != 0) {
      if (0 < (int)*(ulong *)(param_3 + 0x18)) {
        uVar12 = 0;
        uVar9 = *(ulong *)(param_3 + 0x18) & 0xffffffff;
        do {
          if (uVar9 <= uVar12) {
                    /* WARNING: Subroutine does not return */
            FUN_03f5c558();
          }
          puVar1 = (undefined4 *)(param_3 + 0x20 + uVar12 * 8);
          lVar11 = *(long *)(lVar6 + 0x20);
          uVar2 = *puVar1;
          uVar3 = puVar1[1];
          uVar7 = thunk_FUN_03f9944c(DAT_0918a440);
          _GAME_GameItem_RwItemModel___ctor(uVar7,uVar2,uVar3,0);
          lVar5 = DAT_091afa48;
          if (lVar11 == 0) goto LAB_077da960;
          lVar10 = *(long *)(lVar11 + 0x10);
          *(int *)(lVar11 + 0x1c) = *(int *)(lVar11 + 0x1c) + 1;
          if (lVar10 == 0) goto LAB_077da960;
          uVar4 = *(uint *)(lVar11 + 0x18);
          if (uVar4 < *(uint *)(lVar10 + 0x18)) {
            *(uint *)(lVar11 + 0x18) = uVar4 + 1;
            puVar8 = (undefined8 *)(lVar10 + (long)(int)uVar4 * 8 + 0x20);
            *puVar8 = uVar7;
            thunk_FUN_03f5d7b8(puVar8,uVar7);
          }
          else {
            FUN_057e0c68(lVar11,uVar7,
                         *(undefined8 *)(*(long *)(*(long *)(lVar5 + 0x20) + 0xc0) + 0x70));
          }
          uVar9 = (ulong)*(uint *)(param_3 + 0x18);
          uVar12 = uVar12 + 1;
        } while ((long)uVar12 < (long)(int)*(uint *)(param_3 + 0x18));
      }
      return lVar6;
    }
  }
LAB_077da960:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

