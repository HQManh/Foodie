// rea decompile_all
// name: AnhPD.FoodOrder.FlexibleBurger$$GetIngIds
// address: 0x413b79c
// body: available
// range: 0x413b79c-0x413ba0b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x413ba04 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x413ba08 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long AnhPD_FoodOrder_FlexibleBurger__GetIngIds(undefined8 param_1,undefined8 param_2)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  ulong local_58;
  
  if ((DAT_09516393 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091820c0);
    FUN_03f5c2a4(&DAT_091a5288);
    FUN_03f5c2a4(&DAT_091a5290);
    FUN_03f5c2a4(&DAT_091a5298);
    FUN_03f5c2a4(&DAT_091b2ab0);
    FUN_03f5c2a4(&DAT_091b0570);
    FUN_03f5c2a4(&DAT_091b2ac8);
    FUN_03f5c2a4(&DAT_091b2ae0);
    FUN_03f5c2a4(&DAT_091b0558);
    FUN_03f5c2a4(&DAT_0917cce8);
    DAT_09516393 = 1;
  }
  local_68 = 0;
  uStack_60 = 0;
  local_58 = 0;
  local_70 = 0;
  if (*(int *)(DAT_091820c0 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  lVar2 = AnhPD_FoodOrder_BurgerPieceTable__FillingsOfId(param_2);
  lVar3 = DAT_091b2ab0;
  if (lVar2 != 0) {
    lVar6 = *(long *)(lVar2 + 0x10);
    *(int *)(lVar2 + 0x1c) = *(int *)(lVar2 + 0x1c) + 1;
    if (lVar6 != 0) {
      uVar1 = *(uint *)(lVar2 + 0x18);
      if (uVar1 < *(uint *)(lVar6 + 0x18)) {
        *(uint *)(lVar2 + 0x18) = uVar1 + 1;
        *(undefined4 *)(lVar6 + (long)(int)uVar1 * 4 + 0x20) = 0;
      }
      else {
        FUN_05799adc(lVar2,0,*(undefined8 *)(*(long *)(*(long *)(lVar3 + 0x20) + 0xc0) + 0x70));
      }
      FUN_0579b500(lVar2,DAT_091b2ae0);
      lVar3 = thunk_FUN_03f9944c(DAT_0917cce8);
      FUN_057e0400(lVar3,DAT_091b0558);
      FUN_0579a6a8(&local_68,lVar2,DAT_091b2ac8);
      while( true ) {
        do {
          uVar4 = FUN_071aef5c(&local_68,DAT_091a5290);
          uVar5 = local_58;
          if ((uVar4 & 1) == 0) {
            FUN_071aef58(&local_68,DAT_091a5288);
            return lVar3;
          }
          if (*(int *)(DAT_091820c0 + 0xe4) == 0) {
            FUN_03f5c424();
          }
          uVar5 = AnhPD_FoodOrder_BurgerPieceTable__TryGetPreparedId(uVar5 & 0xffffffff,&local_70);
          lVar2 = DAT_091b0570;
        } while ((uVar5 & 1) == 0);
        if (lVar3 == 0) break;
        lVar6 = *(long *)(lVar3 + 0x10);
        *(int *)(lVar3 + 0x1c) = *(int *)(lVar3 + 0x1c) + 1;
        if (lVar6 == 0) break;
        uVar1 = *(uint *)(lVar3 + 0x18);
        if (uVar1 < *(uint *)(lVar6 + 0x18)) {
          *(uint *)(lVar3 + 0x18) = uVar1 + 1;
          *(undefined8 *)(lVar6 + (long)(int)uVar1 * 8 + 0x20) = local_70;
          thunk_FUN_03f5d7b8();
        }
        else {
          FUN_057e0c68(lVar3,local_70,
                       *(undefined8 *)(*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x70));
        }
      }
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

