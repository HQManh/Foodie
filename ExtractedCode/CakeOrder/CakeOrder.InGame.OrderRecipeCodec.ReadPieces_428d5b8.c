// rea decompile_all
// name: CakeOrder.InGame.OrderRecipeCodec$$ReadPieces
// address: 0x428d5b8
// body: available
// range: 0x428d5b8-0x428d7d3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x428d7d0 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void CakeOrder_InGame_OrderRecipeCodec__ReadPieces
               (undefined8 param_1,undefined8 param_2,long param_3)

{
  uint uVar1;
  long lVar2;
  ulong uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined4 local_b4;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 local_50;
  
  if ((DAT_09517180 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091835d0);
    FUN_03f5c2a4(&DAT_091adc88);
    FUN_03f5c2a4(&DAT_091b97f0);
    FUN_03f5c2a4(&DAT_091b9810);
    FUN_03f5c2a4(&DAT_0918b3a0);
    FUN_03f5c2a4(&DAT_09214220);
    DAT_09517180 = 1;
  }
  local_50 = 0;
  local_80 = 0;
  local_b0 = 0;
  uStack_a8 = 0;
  local_b4 = 0;
  uStack_68 = 0;
  local_70 = 0;
  local_58 = 0;
  uStack_60 = 0;
  uStack_98 = 0;
  local_a0 = 0;
  uStack_88 = 0;
  uStack_90 = 0;
  local_d0 = 0;
  uStack_c8 = 0;
  if (*(int *)(DAT_0918b3a0 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  Utilities_StringExtension__SplitNonAlloc(&local_f8,param_1,param_2,0x2e,0);
  local_80 = local_d8;
  uStack_98 = uStack_f0;
  local_a0 = local_f8;
  uStack_88 = uStack_e0;
  uStack_90 = local_e8;
  Utilities_StringExtension_StringSplitEnumerator__GetEnumerator(&local_70,&local_a0,0);
  uVar3 = Utilities_StringExtension_StringSplitEnumerator__MoveNext(&local_70,0);
  local_d0 = local_58;
  uStack_c8 = local_50;
  do {
    if ((uVar3 & 1) == 0) {
      return;
    }
    local_b0 = local_d0;
    uStack_a8 = uStack_c8;
    local_58 = local_d0;
    local_50 = uStack_c8;
    if ((int)uStack_c8 != 0) {
      uVar3 = Utilities_StringExtension_StringSplitEntry__TryParseInt(&local_b0,&local_b4,0);
      lVar2 = DAT_091adc88;
      if ((uVar3 & 1) == 0) {
        uStack_c8 = uStack_a8;
        local_d0 = local_b0;
        uVar4 = FUN_05ff6c30(&local_d0,DAT_091b97f0);
        uVar4 = System_String__Concat(DAT_09214220,uVar4,0);
        if (*(int *)(DAT_091835d0 + 0xe4) == 0) {
          FUN_03f5c424(DAT_091835d0);
        }
        UnityEngine_Debug__LogWarning(uVar4,0);
      }
      else {
        if (param_3 == 0) {
LAB_0428d7d0:
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        lVar5 = *(long *)(param_3 + 0x10);
        *(int *)(param_3 + 0x1c) = *(int *)(param_3 + 0x1c) + 1;
        if (lVar5 == 0) goto LAB_0428d7d0;
        uVar1 = *(uint *)(param_3 + 0x18);
        if (uVar1 < *(uint *)(lVar5 + 0x18)) {
          *(uint *)(param_3 + 0x18) = uVar1 + 1;
          *(undefined4 *)(lVar5 + (long)(int)uVar1 * 4 + 0x20) = local_b4;
        }
        else {
          FUN_057971a8(param_3,local_b4,
                       *(undefined8 *)(*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x70));
        }
      }
    }
    uVar3 = Utilities_StringExtension_StringSplitEnumerator__MoveNext(&local_70,0);
    local_d0 = local_58;
    uStack_c8 = local_50;
  } while( true );
}

