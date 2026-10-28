// rea decompile_all
// name: AnhPD.FoodOrder.FlexibleId$$Parts
// address: 0x41d4814
// body: available
// range: 0x41d4814-0x41d4953 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x41d4950 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long AnhPD_FoodOrder_FlexibleId__Parts(undefined8 param_1)

{
  int iVar1;
  uint uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  ulong uVar7;
  long lVar8;
  int iVar9;
  undefined4 local_24;
  
  if ((DAT_09516a54 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091adc88);
    FUN_03f5c2a4(&DAT_091adc70);
    FUN_03f5c2a4(&DAT_0917c520);
    DAT_09516a54 = 1;
  }
  local_24 = 0;
  lVar4 = thunk_FUN_03f9944c(DAT_0917c520);
  FUN_05796918(lVar4,DAT_091adc70);
  lVar5 = AnhPD_FoodOrder_FlexibleId__StateOf(param_1);
  if (lVar5 != 0) {
    if (1 < *(int *)(lVar5 + 0x10)) {
      iVar9 = 0;
      do {
        uVar6 = System_String__Substring(lVar5,iVar9,2,0);
        uVar7 = System_Int32__TryParse(uVar6,&local_24,0);
        lVar3 = DAT_091adc88;
        if ((uVar7 & 1) != 0) {
          if (lVar4 == 0) goto LAB_041d4950;
          lVar8 = *(long *)(lVar4 + 0x10);
          *(int *)(lVar4 + 0x1c) = *(int *)(lVar4 + 0x1c) + 1;
          if (lVar8 == 0) goto LAB_041d4950;
          uVar2 = *(uint *)(lVar4 + 0x18);
          if (uVar2 < *(uint *)(lVar8 + 0x18)) {
            *(uint *)(lVar4 + 0x18) = uVar2 + 1;
            *(undefined4 *)(lVar8 + (long)(int)uVar2 * 4 + 0x20) = local_24;
          }
          else {
            FUN_057971a8(lVar4,local_24,
                         *(undefined8 *)(*(long *)(*(long *)(lVar3 + 0x20) + 0xc0) + 0x70));
          }
        }
        iVar1 = iVar9 + 3;
        iVar9 = iVar9 + 2;
      } while (iVar1 < *(int *)(lVar5 + 0x10));
    }
    return lVar4;
  }
LAB_041d4950:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

