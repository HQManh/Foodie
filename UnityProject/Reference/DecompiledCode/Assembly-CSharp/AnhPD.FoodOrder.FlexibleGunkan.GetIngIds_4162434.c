// rea decompile_all
// name: AnhPD.FoodOrder.FlexibleGunkan$$GetIngIds
// address: 0x4162434
// body: available
// range: 0x4162434-0x41625e3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x41625e0 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long AnhPD_FoodOrder_FlexibleGunkan__GetIngIds(long param_1,undefined8 param_2)

{
  undefined4 uVar1;
  undefined8 uVar2;
  long lVar3;
  ulong uVar4;
  int iVar5;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined4 local_34;
  
  if ((DAT_0951653d & 1) == 0) {
    FUN_03f5c2a4(&DAT_09178bd0);
    FUN_03f5c2a4(&DAT_091b0608);
    FUN_03f5c2a4(&DAT_091b0610);
    FUN_03f5c2a4(&DAT_091b0620);
    FUN_03f5c2a4(&DAT_091daa88);
    FUN_03f5c2a4(&DAT_0918b680);
    DAT_0951653d = 1;
  }
  local_34 = 0;
  local_48 = 0;
  AnhPD_FoodOrder_FlexiblePieceId__PiecesOf(&local_60,*(undefined8 *)(param_1 + 0x78),param_2,0);
  uVar2 = thunk_FUN_03f9944c(DAT_09178bd0);
  FUN_05315cf4(uVar2,0,DAT_091daa88,0);
  uStack_78 = uStack_58;
  local_80 = local_60;
  local_70 = local_50;
  lVar3 = AnhPD_FoodOrder_PieceLookup__PreparedIdsOf(&local_80,uVar2,0);
  if (lVar3 != 0) {
    if (0 < *(int *)(lVar3 + 0x18)) {
      iVar5 = 0;
      do {
        uVar2 = FUN_057e0998(lVar3,iVar5,DAT_091b0610);
        if (*(int *)(DAT_0918b680 + 0xe4) == 0) {
          FUN_03f5c424(DAT_0918b680);
        }
        uVar4 = AnhPD_FoodOrder_SushiPieceTable__TryGetPiece(uVar2,&local_34);
        uVar1 = local_34;
        if ((uVar4 & 1) != 0) {
          if (*(int *)(DAT_0918b680 + 0xe4) == 0) {
            FUN_03f5c424();
          }
          uVar4 = AnhPD_FoodOrder_SushiPieceTable__TryGetCubeOf(uVar1,&local_48);
          if ((uVar4 & 1) != 0) {
            FUN_057e09ec(lVar3,iVar5,local_48,DAT_091b0620);
          }
        }
        iVar5 = iVar5 + 1;
      } while (iVar5 < *(int *)(lVar3 + 0x18));
    }
    return lVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

