// rea decompile_all
// name: CakeOrder.InGame.OrderRecipeCodec$$Encode
// address: 0x428c908
// body: available
// range: 0x428c908-0x428cac3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x428cac0 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void CakeOrder_InGame_OrderRecipeCodec__Encode(undefined4 param_1,long *param_2)

{
  int iVar1;
  undefined4 uVar2;
  long lVar3;
  long *plVar4;
  undefined8 *puVar5;
  ulong uVar6;
  int *piVar7;
  int iVar8;
  
  if ((DAT_0951717d & 1) == 0) {
    FUN_03f5c2a4(&DAT_0917b378);
    FUN_03f5c2a4(&DAT_0917b510);
    FUN_03f5c2a4(&DAT_0918b348);
    DAT_0951717d = 1;
  }
  lVar3 = thunk_FUN_03f9944c(DAT_0918b348);
  System_Text_StringBuilder___ctor(lVar3,0);
  if (((lVar3 == 0) || (lVar3 = System_Text_StringBuilder__Append(lVar3,param_1,0), lVar3 == 0)) ||
     (plVar4 = (long *)System_Text_StringBuilder__Append(lVar3,0x23,0), param_2 == (long *)0x0)) {
LAB_0428cac0:
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  iVar8 = 0;
  do {
    lVar3 = *param_2;
    uVar6 = (ulong)*(ushort *)(lVar3 + 0x12e);
    if (uVar6 != 0) {
      piVar7 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == DAT_0917b378) {
          puVar5 = (undefined8 *)(lVar3 + (long)*piVar7 * 0x10 + 0x138);
          goto LAB_0428c9fc;
        }
        uVar6 = uVar6 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar6 != 0);
    }
    puVar5 = (undefined8 *)FUN_03f95da8(param_2,DAT_0917b378,0);
LAB_0428c9fc:
    iVar1 = (*(code *)*puVar5)(param_2,puVar5[1]);
    if (iVar1 <= iVar8) {
      if (plVar4 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0428cabc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar4 + 0x168))(plVar4,*(undefined8 *)(*plVar4 + 0x170));
        return;
      }
      goto LAB_0428cac0;
    }
    if (iVar8 != 0) {
      if (plVar4 == (long *)0x0) goto LAB_0428cac0;
      System_Text_StringBuilder__Append(plVar4,0x2e,0);
    }
    lVar3 = *param_2;
    uVar6 = (ulong)*(ushort *)(lVar3 + 0x12e);
    if (uVar6 != 0) {
      piVar7 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == DAT_0917b510) {
          puVar5 = (undefined8 *)(lVar3 + (long)*piVar7 * 0x10 + 0x138);
          goto LAB_0428ca74;
        }
        uVar6 = uVar6 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar6 != 0);
    }
    puVar5 = (undefined8 *)FUN_03f95da8(param_2,DAT_0917b510,0);
LAB_0428ca74:
    uVar2 = (*(code *)*puVar5)(param_2,iVar8,puVar5[1]);
    if (plVar4 == (long *)0x0) goto LAB_0428cac0;
    System_Text_StringBuilder__Append(plVar4,uVar2,0);
    iVar8 = iVar8 + 1;
  } while( true );
}

