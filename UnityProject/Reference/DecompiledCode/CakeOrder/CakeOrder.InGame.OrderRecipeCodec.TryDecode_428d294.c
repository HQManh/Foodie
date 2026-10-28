// rea decompile_all
// name: CakeOrder.InGame.OrderRecipeCodec$$TryDecode
// address: 0x428d294
// body: available
// range: 0x428d294-0x428d51f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x428d51c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


bool CakeOrder_InGame_OrderRecipeCodec__TryDecode
               (undefined8 param_1,undefined8 param_2,ulong *param_3)

{
  uint uVar1;
  long lVar2;
  ulong uVar3;
  undefined8 uVar4;
  int iVar5;
  ulong local_108;
  ulong uStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  ulong local_c0;
  ulong uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 local_70;
  uint local_54;
  
  if ((DAT_0951717e & 1) == 0) {
    FUN_03f5c2a4(&DAT_091835d0);
    FUN_03f5c2a4(&DAT_091add08);
    FUN_03f5c2a4(&DAT_091adc70);
    FUN_03f5c2a4(&DAT_091add18);
    FUN_03f5c2a4(&DAT_0917c520);
    FUN_03f5c2a4(&DAT_091b97f0);
    FUN_03f5c2a4(&DAT_0918b3a0);
    FUN_03f5c2a4(&DAT_09214218);
    DAT_0951717e = 1;
  }
  *param_3 = 0;
  param_3[1] = 0;
  local_70 = 0;
  local_a0 = 0;
  uStack_b8 = 0;
  local_c0 = 0;
  uStack_a8 = 0;
  uStack_b0 = 0;
  uStack_88 = 0;
  local_90 = 0;
  local_78 = 0;
  uStack_80 = 0;
  local_d0 = 0;
  uStack_c8 = 0;
  local_e0 = 0;
  uStack_d8 = 0;
  local_54 = 0;
  lVar2 = thunk_FUN_03f9944c(DAT_0917c520);
  FUN_05796918(lVar2,DAT_091adc70);
  if (*(int *)(DAT_0918b3a0 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  Utilities_StringExtension__SplitNonAlloc(&local_108,param_1,param_2,0x23,0);
  local_a0 = local_e8;
  uStack_b8 = uStack_100;
  local_c0 = local_108;
  uStack_a8 = uStack_f0;
  uStack_b0 = local_f8;
  Utilities_StringExtension_StringSplitEnumerator__GetEnumerator(&local_90,&local_c0,0);
  uVar3 = Utilities_StringExtension_StringSplitEnumerator__MoveNext(&local_90,0);
  if ((uVar3 & 1) != 0) {
    iVar5 = 0;
    do {
      local_d0 = local_78;
      uStack_c8 = local_70;
      if ((iVar5 == 0) &&
         (uVar3 = CakeOrder_InGame_OrderRecipeCodec__Contains(param_1,param_2,0x23),
         (uVar3 & 1) != 0)) {
        uVar3 = Utilities_StringExtension_StringSplitEntry__TryParseInt(&local_d0,&local_54,0);
        if ((uVar3 & 1) == 0) {
          local_54 = 0;
          uStack_d8 = uStack_c8;
          local_e0 = local_d0;
          uVar4 = FUN_05ff6c30(&local_e0,DAT_091b97f0);
          uVar4 = System_String__Concat(DAT_09214218,uVar4,0);
          if (*(int *)(DAT_091835d0 + 0xe4) == 0) {
            FUN_03f5c424(DAT_091835d0);
          }
          UnityEngine_Debug__LogWarning(uVar4,0);
        }
      }
      else {
        CakeOrder_InGame_OrderRecipeCodec__ReadPieces(local_d0,uStack_c8,lVar2);
      }
      uVar3 = Utilities_StringExtension_StringSplitEnumerator__MoveNext(&local_90,0);
      iVar5 = iVar5 + -1;
    } while ((uVar3 & 1) != 0);
  }
  uVar1 = local_54;
  if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  iVar5 = *(int *)(lVar2 + 0x18);
  if (iVar5 != 0) {
    uStack_100 = FUN_05798d44(lVar2,DAT_091add08);
    local_108 = (ulong)uVar1;
    thunk_FUN_03f5d7b8(&uStack_100,uStack_100);
    param_3[1] = uStack_100;
    *param_3 = local_108;
    thunk_FUN_03f5d7b8(param_3 + 1,0);
  }
  return iVar5 != 0;
}

