// rea decompile_all
// name: AnhPD.FoodOrder.PieceLedger$$DescribeCounts
// address: 0x41f79fc
// body: available
// range: 0x41f79fc-0x41f7bcf inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x41f7bbc to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x41f7bc0 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x41f7bc4 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x41f7bc8 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x41f7bcc to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void AnhPD_FoodOrder_PieceLedger__DescribeCounts(long param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  ulong uVar3;
  int iVar4;
  long *plVar5;
  ulong uVar6;
  long lVar7;
  undefined8 local_98;
  undefined8 *puStack_90;
  undefined8 local_88;
  ulong uStack_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 *puStack_68;
  undefined8 local_60;
  ulong uStack_58;
  undefined8 local_50;
  
  if ((DAT_09516bb5 & 1) == 0) {
    FUN_03f5c2a4(&DAT_0919f9b0);
    FUN_03f5c2a4(&DAT_091a6750);
    FUN_03f5c2a4(&DAT_091a6758);
    FUN_03f5c2a4(&DAT_091a6760);
    FUN_03f5c2a4(&DAT_091a9818);
    FUN_03f5c2a4(&DAT_091a9820);
    FUN_03f5c2a4(&DAT_0918b348);
    FUN_03f5c2a4(&DAT_091f86e8);
    FUN_03f5c2a4(&DAT_091f5700);
    DAT_09516bb5 = 1;
  }
  local_50 = 0;
  puStack_68 = (undefined8 *)0x0;
  local_70 = 0;
  uStack_58 = 0;
  local_60 = 0;
  plVar5 = (long *)thunk_FUN_03f9944c(DAT_0918b348);
  System_Text_StringBuilder___ctor(plVar5,0);
  if (param_1 != 0) {
    FUN_06fca844(&local_98,param_1,DAT_0919f9b0);
    local_50 = local_78;
    puStack_68 = puStack_90;
    local_70 = local_98;
    uStack_58 = uStack_80;
    local_60 = local_88;
    local_98 = 0;
    puStack_90 = &local_70;
    while (uVar6 = FUN_07272f90(&local_70,DAT_091a6758), uVar3 = uStack_58, uVar2 = local_60,
          (uVar6 & 1) != 0) {
      if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      iVar4 = System_Text_StringBuilder__get_Length(plVar5,0);
      puVar1 = &DAT_091f86e8;
      if (iVar4 < 1) {
        puVar1 = &DAT_091f5700;
      }
      lVar7 = System_Text_StringBuilder__Append(plVar5,*puVar1,0);
      if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      lVar7 = System_Text_StringBuilder__Append(lVar7,uVar2,0);
      if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      lVar7 = System_Text_StringBuilder__Append(lVar7,0x78,0);
      if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      System_Text_StringBuilder__Append(lVar7,uVar3 & 0xffffffff,0);
    }
    FUN_072730b4(&local_70,DAT_091a6750);
    if (plVar5 != (long *)0x0) {
      (**(code **)(*plVar5 + 0x168))(plVar5,*(undefined8 *)(*plVar5 + 0x170));
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

