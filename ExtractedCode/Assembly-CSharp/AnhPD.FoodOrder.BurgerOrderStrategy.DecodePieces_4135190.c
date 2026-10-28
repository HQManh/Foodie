// rea decompile_all
// name: AnhPD.FoodOrder.BurgerOrderStrategy$$DecodePieces
// address: 0x4135190
// body: available
// range: 0x4135190-0x4135393 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x413538c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4135390 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long AnhPD_FoodOrder_BurgerOrderStrategy__DecodePieces(undefined8 param_1)

{
  long lVar1;
  undefined4 uVar2;
  uint uVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  ulong uVar11;
  long lVar12;
  undefined8 local_70;
  long local_68;
  undefined4 local_54;
  
  if ((DAT_09516359 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091710b0);
    FUN_03f5c2a4(&DAT_091ab610);
    FUN_03f5c2a4(&DAT_091ab608);
    FUN_03f5c2a4(&DAT_091ab630);
    FUN_03f5c2a4(&DAT_0917bd88);
    DAT_09516359 = 1;
  }
  local_70 = 0;
  local_68 = 0;
  uVar6 = CakeOrder_InGame_OrderRecipeCodec__TryDecode(param_1,&local_70,0);
  lVar5 = local_68;
  uVar7 = 0;
  if ((uVar6 & 1) == 0) {
    return 0;
  }
  if (local_68 != 0) {
    lVar8 = thunk_FUN_03f9944c(DAT_0917bd88);
    uVar7 = FUN_057992c4(lVar8,*(undefined4 *)(lVar5 + 0x18),DAT_091ab608);
    lVar5 = local_68;
    if (local_68 != 0) {
      if (0 < (int)*(ulong *)(local_68 + 0x18)) {
        uVar6 = 0;
        uVar11 = *(ulong *)(local_68 + 0x18) & 0xffffffff;
        lVar1 = local_68 + 0x20;
        do {
          uVar9 = DAT_091710b0;
          if (uVar11 <= uVar6) {
                    /* WARNING: Subroutine does not return */
            FUN_03f5c558();
          }
          uVar2 = *(undefined4 *)(lVar1 + uVar6 * 4);
          if (*(int *)(DAT_095354b8 + 0xe4) == 0) {
            FUN_03f5c424();
          }
          uVar9 = System_Type__GetTypeFromHandle(uVar9,0);
          local_54 = uVar2;
          uVar10 = FUN_03f5c42c(DAT_09535420,&local_54);
          if (*(int *)(DAT_09535470 + 0xe4) == 0) {
            FUN_03f5c424(DAT_09535470);
          }
          uVar7 = System_Enum__IsDefined(uVar9,uVar10,0);
          lVar4 = DAT_091ab610;
          if ((uVar7 & 1) != 0) {
            if (lVar8 == 0) goto LAB_0413538c;
            lVar12 = *(long *)(lVar8 + 0x10);
            *(int *)(lVar8 + 0x1c) = *(int *)(lVar8 + 0x1c) + 1;
            if (lVar12 == 0) goto LAB_0413538c;
            uVar3 = *(uint *)(lVar8 + 0x18);
            if (uVar3 < *(uint *)(lVar12 + 0x18)) {
              *(uint *)(lVar8 + 0x18) = uVar3 + 1;
              *(undefined4 *)(lVar12 + (long)(int)uVar3 * 4 + 0x20) = uVar2;
            }
            else {
              uVar7 = FUN_05799adc(lVar8,uVar2,
                                   *(undefined8 *)(*(long *)(*(long *)(lVar4 + 0x20) + 0xc0) + 0x70)
                                  );
            }
          }
          uVar11 = (ulong)*(uint *)(lVar5 + 0x18);
          uVar6 = uVar6 + 1;
        } while ((long)uVar6 < (long)(int)*(uint *)(lVar5 + 0x18));
      }
      if (lVar8 != 0) {
        if (0 < *(int *)(lVar8 + 0x18)) {
          return lVar8;
        }
        return 0;
      }
    }
  }
LAB_0413538c:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550(uVar7);
}

