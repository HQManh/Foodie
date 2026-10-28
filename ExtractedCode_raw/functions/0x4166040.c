// rea decompile_all
// name: AnhPD.FoodOrder.FlexibleSashimiDisplay$$CanShow
// address: 0x4166040
// body: available
// range: 0x4166040-0x41662a3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x416618c to 0x57e1304 FUN_057e1304 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x41661fc to 0x8661ad8 UnityEngine.Object$$op_Implicit (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x4166280 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


ulong AnhPD_FoodOrder_FlexibleSashimiDisplay__CanShow(long param_1,int param_2)

{
  int iVar1;
  long *plVar2;
  ulong uVar3;
  undefined8 *puVar4;
  long lVar5;
  long lVar6;
  int iVar7;
  undefined8 uVar8;
  
  if ((DAT_0951656d & 1) == 0) {
    FUN_03f5c2a4(&DAT_091b2bb8);
    FUN_03f5c2a4(&DAT_091b2bd8);
    FUN_03f5c2a4(&DAT_091b2be0);
    FUN_03f5c2a4(&DAT_09188ad0);
    FUN_03f5c2a4(&DAT_0917e190);
    FUN_03f5c2a4(&DAT_0918b680);
    FUN_03f5c2a4(&DAT_091ea248);
    FUN_03f5c2a4(&DAT_09190a90);
    DAT_0951656d = 1;
  }
  if (*(int *)(param_1 + 0x30) == param_2) {
    lVar5 = *(long *)(param_1 + 0x20);
    if (*(int *)(DAT_09190a90 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    puVar4 = *(undefined8 **)(DAT_09190a90 + 0xb8);
    lVar6 = puVar4[1];
    if (lVar6 == 0) {
      if (*(int *)(DAT_09190a90 + 0xe4) == 0) {
        FUN_03f5c424();
        puVar4 = *(undefined8 **)(DAT_09190a90 + 0xb8);
      }
      uVar8 = *puVar4;
      lVar6 = thunk_FUN_03f9944c(DAT_0917e190);
      FUN_05d78cfc(lVar6,uVar8,DAT_091ea248,0);
      plVar2 = (long *)(*(long *)(DAT_09190a90 + 0xb8) + 8);
      *plVar2 = lVar6;
      thunk_FUN_03f5d7b8(plVar2,lVar6);
    }
    if (lVar5 != 0) {
      uVar3 = FUN_057e1304(lVar5,lVar6,DAT_091b2bb8);
      return uVar3;
    }
  }
  else {
    if (*(int *)(DAT_0918b680 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar3 = AnhPD_FoodOrder_SushiPieceTable__IsFish(param_2);
    if ((uVar3 & 1) != 0) {
      uVar8 = AnhPD_FoodOrder_FlexibleSashimiDisplay__SpriteOf(param_1,param_2);
      if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
        FUN_03f5c424(DAT_09188ad0);
      }
      uVar3 = UnityEngine_Object__op_Implicit(uVar8,0);
      return uVar3;
    }
    lVar5 = *(long *)(param_1 + 0x38);
    if (lVar5 != 0) {
      iVar7 = 0;
      do {
        iVar1 = *(int *)(lVar5 + 0x18);
        if (iVar1 <= iVar7) {
LAB_04166284:
          return (ulong)(iVar7 < iVar1);
        }
        lVar5 = FUN_057e0998(lVar5,iVar7,DAT_091b2be0);
        if ((lVar5 != 0) && (*(int *)(lVar5 + 0x10) == param_2)) {
          uVar8 = *(undefined8 *)(lVar5 + 0x18);
          if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
            FUN_03f5c424();
          }
          uVar3 = UnityEngine_Object__op_Implicit(uVar8,0);
          if (((uVar3 & 1) != 0) && (*(char *)(lVar5 + 0x20) == '\0')) goto LAB_04166284;
        }
        lVar5 = *(long *)(param_1 + 0x38);
        iVar7 = iVar7 + 1;
      } while (lVar5 != 0);
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

