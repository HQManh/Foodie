// rea decompile_all
// name: AnhPD.FoodOrder.HighlightBlink$$.cctor
// address: 0x4117048
// body: available
// range: 0x4117048-0x41171bb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x41171b4 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x41171b8 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void AnhPD_FoodOrder_HighlightBlink___cctor(void)

{
  uint uVar1;
  long lVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 local_18;
  
  if ((DAT_0951623e & 1) == 0) {
    FUN_03f5c2a4(&DAT_09185100);
    FUN_03f5c2a4(&DAT_091807e8);
    DAT_0951623e = 1;
  }
  local_18 = 0;
  lVar2 = FUN_03f5c394(DAT_091807e8,8);
  if (lVar2 != 0) {
    uVar1 = *(uint *)(lVar2 + 0x18);
    if (uVar1 != 0) {
      *(undefined8 *)(lVar2 + 0x20) = 0x3f800000;
      if (uVar1 != 1) {
        *(undefined8 *)(lVar2 + 0x28) = 0xbf800000;
        if (2 < uVar1) {
          *(undefined8 *)(lVar2 + 0x30) = 0x3f80000000000000;
          if (uVar1 != 3) {
            local_18 = NEON_fmov(0x3f800000,4);
            uVar4 = 0;
            *(undefined8 *)(lVar2 + 0x38) = 0xbf80000000000000;
            uVar3 = UnityEngine_Vector2__Normalize(&local_18,0);
            if (4 < *(uint *)(lVar2 + 0x18)) {
              *(undefined4 *)(lVar2 + 0x40) = uVar3;
              *(undefined4 *)(lVar2 + 0x44) = uVar4;
              local_18 = 0x3f800000bf800000;
              uVar3 = UnityEngine_Vector2__Normalize(&local_18,0);
              if (5 < *(uint *)(lVar2 + 0x18)) {
                *(undefined4 *)(lVar2 + 0x48) = uVar3;
                *(undefined4 *)(lVar2 + 0x4c) = uVar4;
                local_18 = 0xbf8000003f800000;
                uVar3 = UnityEngine_Vector2__Normalize(&local_18,0);
                if (6 < *(uint *)(lVar2 + 0x18)) {
                  local_18 = NEON_fmov(0xbf800000,4);
                  *(undefined4 *)(lVar2 + 0x50) = uVar3;
                  *(undefined4 *)(lVar2 + 0x54) = uVar4;
                  uVar3 = UnityEngine_Vector2__Normalize(&local_18,0);
                  if ((*(uint *)(lVar2 + 0x18) & 0xfffffff8) != 0) {
                    *(undefined4 *)(lVar2 + 0x58) = uVar3;
                    *(undefined4 *)(lVar2 + 0x5c) = uVar4;
                    **(long **)(DAT_09185100 + 0xb8) = lVar2;
                    thunk_FUN_03f5d7b8(*(undefined8 *)(DAT_09185100 + 0xb8),lVar2);
                    return;
                  }
                }
              }
            }
          }
        }
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_03f5c558();
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

