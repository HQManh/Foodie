// rea decompile_all
// name: CookOrder.Cooking.Implement.CookingCompositeLookupEntry$$Matches
// address: 0x44c715c
// body: available
// range: 0x44c715c-0x44c7253 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x44c724c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x44c7250 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


bool CookOrder_Cooking_Implement_CookingCompositeLookupEntry__Matches
               (long param_1,undefined8 param_2)

{
  uint uVar1;
  long lVar2;
  int iVar3;
  ulong uVar4;
  long lVar5;
  bool bVar6;
  ulong uVar7;
  
  if ((DAT_095182ae & 1) == 0) {
    FUN_03f5c2a4(&DAT_091ada28);
    FUN_03f5c2a4(&DAT_091ad9f0);
    FUN_03f5c2a4(&DAT_0917c4a0);
    DAT_095182ae = 1;
  }
  lVar2 = thunk_FUN_03f9944c(DAT_0917c4a0);
  FUN_057e053c(lVar2,param_2,DAT_091ad9f0);
  lVar5 = *(long *)(param_1 + 0x18);
  if (lVar5 != 0) {
    iVar3 = (int)*(ulong *)(lVar5 + 0x18);
    bVar6 = iVar3 < 1;
    if (0 < iVar3) {
      uVar7 = 0;
      uVar4 = *(ulong *)(lVar5 + 0x18) & 0xffffffff;
      do {
        if (uVar4 <= uVar7) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c558();
        }
        if (lVar2 == 0) goto LAB_044c724c;
        uVar4 = FUN_057e2274(lVar2,*(undefined8 *)(lVar5 + 0x20 + uVar7 * 8),DAT_091ada28);
        if ((uVar4 & 1) == 0) {
          return bVar6;
        }
        uVar1 = *(uint *)(lVar5 + 0x18);
        uVar4 = (ulong)uVar1;
        uVar7 = uVar7 + 1;
        bVar6 = (long)(int)uVar1 <= (long)uVar7;
      } while ((long)uVar7 < (long)(int)uVar1);
    }
    return bVar6;
  }
LAB_044c724c:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

