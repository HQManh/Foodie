// rea decompile_all
// name: System.Globalization.DateTimeFormatInfoScanner$$AddIgnorableSymbols
// address: 0x7507cc4
// body: available
// range: 0x7507cc4-0x7507e37 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x7507e0c to 0x3f5c248 thunk_FUN_03f5d7b8 (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x7507e30 to 0x57e0c68 FUN_057e0c68 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x7507e34 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void System_Globalization_DateTimeFormatInfoScanner__AddIgnorableSymbols
               (long param_1,undefined8 param_2)

{
  uint uVar1;
  long lVar2;
  undefined8 uVar3;
  ulong uVar4;
  undefined8 *puVar5;
  long lVar6;
  long lVar7;
  long *plVar8;
  
  if ((DAT_095216af & 1) == 0) {
    FUN_03f5c2a4(&DAT_091b0570);
    FUN_03f5c2a4(&DAT_091b0590);
    FUN_03f5c2a4(&DAT_091b0558);
    FUN_03f5c2a4(&DAT_0917cce8);
    FUN_03f5c2a4(&DAT_09227258);
    DAT_095216af = 1;
  }
  plVar8 = (long *)(param_1 + 0x10);
  if (*plVar8 == 0) {
    lVar2 = thunk_FUN_03f9944c(DAT_0917cce8);
    FUN_057e0400(lVar2,DAT_091b0558);
    *plVar8 = lVar2;
    thunk_FUN_03f5d7b8(plVar8,lVar2);
  }
  uVar3 = System_String__Concat(DAT_09227258,param_2,0);
  if (*plVar8 != 0) {
    uVar4 = FUN_057e1004(*plVar8,uVar3,DAT_091b0590);
    lVar2 = DAT_091b0570;
    if ((uVar4 & 1) != 0) {
      return;
    }
    lVar6 = *plVar8;
    if (lVar6 != 0) {
      lVar7 = *(long *)(lVar6 + 0x10);
      *(int *)(lVar6 + 0x1c) = *(int *)(lVar6 + 0x1c) + 1;
      if (lVar7 != 0) {
        uVar1 = *(uint *)(lVar6 + 0x18);
        if (uVar1 < *(uint *)(lVar7 + 0x18)) {
          *(uint *)(lVar6 + 0x18) = uVar1 + 1;
          puVar5 = (undefined8 *)(lVar7 + (long)(int)uVar1 * 8 + 0x20);
          *puVar5 = uVar3;
          thunk_FUN_03f5d7b8(puVar5,uVar3);
          return;
        }
        FUN_057e0c68(lVar6,uVar3,*(undefined8 *)(*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x70));
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

