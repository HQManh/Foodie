// rea decompile_all
// name: AnhPD.FoodOrder.FlexibleBurgerDisplay$$HideAllFillings
// address: 0x413cbac
// body: available
// range: 0x413cbac-0x413ce1b inclusive
// range: 0x413ce20-0x413ce23 inclusive
// range: 0x413ce6c-0x413ceb7 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x413ce18 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x413ce20 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x413ce9c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x413cea4 to 0x3f5c548 FUN_03f5c548 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x413cea8 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x413ceac to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x413ceb4 to 0x3f5c548 FUN_03f5c548 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x0413ce10) */
/* WARNING: Removing unreachable block (ram,0x0413ce14) */
/* WARNING: Removing unreachable block (ram,0x0413cea0) */
/* WARNING: Removing unreachable block (ram,0x0413ceb0) */

void AnhPD_FoodOrder_FlexibleBurgerDisplay__HideAllFillings(long param_1)

{
  uint uVar1;
  ulong uVar2;
  undefined8 uVar3;
  long lVar4;
  uint uVar5;
  long lVar6;
  undefined8 local_a8;
  undefined8 *puStack_a0;
  long local_98;
  undefined8 local_90;
  undefined8 *puStack_88;
  long local_80;
  undefined8 local_70;
  undefined8 *puStack_68;
  long local_60;
  
  if ((DAT_0951639d & 1) == 0) {
    FUN_03f5c2a4(&DAT_091a16f8);
    FUN_03f5c2a4(&DAT_091a6d50);
    FUN_03f5c2a4(&DAT_091a44a8);
    FUN_03f5c2a4(&DAT_091a44b0);
    FUN_03f5c2a4(&DAT_091a6d58);
    FUN_03f5c2a4(&DAT_091a6d60);
    FUN_03f5c2a4(&DAT_091a44b8);
    FUN_03f5c2a4(&DAT_091b0410);
    FUN_03f5c2a4(&DAT_09188ad0);
    FUN_03f5c2a4(&DAT_091beac8);
    DAT_0951639d = 1;
  }
  lVar4 = *(long *)(param_1 + 0x20);
  local_70 = 0;
  puStack_68 = (undefined8 *)0x0;
  local_60 = 0;
  local_90 = 0;
  puStack_88 = (undefined8 *)0x0;
  local_80 = 0;
  if (lVar4 != 0) {
    uVar1 = *(uint *)(lVar4 + 0x18);
    if (0 < (int)uVar1) {
      uVar5 = 0;
      do {
        if (uVar1 <= uVar5) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c558();
        }
        lVar6 = *(long *)(lVar4 + (long)(int)uVar5 * 8 + 0x20);
        if (lVar6 == 0) goto LAB_0413ce9c;
        uVar3 = *(undefined8 *)(lVar6 + 0x10);
        if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        uVar2 = UnityEngine_Object__op_Implicit(uVar3,0);
        if ((uVar2 & 1) != 0) {
          if ((*(long *)(lVar6 + 0x10) == 0) ||
             (lVar6 = UnityEngine_Component__get_gameObject(*(long *)(lVar6 + 0x10),0), lVar6 == 0))
          goto LAB_0413ce9c;
          UnityEngine_GameObject__SetActive(lVar6,0,0);
        }
        uVar1 = *(uint *)(lVar4 + 0x18);
        uVar5 = uVar5 + 1;
      } while ((int)uVar5 < (int)uVar1);
    }
    if ((*(long *)(param_1 + 0x60) != 0) &&
       (lVar4 = FUN_06f33cf0(*(long *)(param_1 + 0x60),DAT_091a16f8), lVar4 != 0)) {
      FUN_06535274(&local_a8,lVar4,DAT_091beac8);
      local_60 = local_98;
      puStack_68 = puStack_a0;
      local_70 = local_a8;
      do {
        uVar2 = FUN_07261de8(&local_70,DAT_091a6d58);
        if ((uVar2 & 1) == 0) {
          FUN_07261de4(&local_70,DAT_091a6d50);
          return;
        }
        if (local_60 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        FUN_057e185c(&local_a8,local_60,DAT_091b0410);
        local_90 = local_a8;
        local_a8 = 0;
        puStack_88 = puStack_a0;
        local_80 = local_98;
        puStack_a0 = &local_90;
        while (uVar2 = FUN_071bd28c(&local_90,DAT_091a44b0), lVar4 = local_80, (uVar2 & 1) != 0) {
          if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
            FUN_03f5c424();
          }
          uVar2 = UnityEngine_Object__op_Implicit(lVar4,0);
          if ((uVar2 & 1) != 0) {
            if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03f5c550();
            }
            lVar4 = UnityEngine_Component__get_gameObject(lVar4,0);
            if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03f5c550();
            }
            UnityEngine_GameObject__SetActive(lVar4,0,0);
          }
        }
        FUN_071bd288(&local_90,DAT_091a44a8);
      } while( true );
    }
  }
LAB_0413ce9c:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

