// rea decompile_all
// name: System.DateTimeParse$$MatchAbbreviatedMonthName
// address: 0x75a8960
// body: available
// range: 0x75a8960-0x75a8b43 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x75a8b40 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


bool System_DateTimeParse__MatchAbbreviatedMonthName(long param_1,long param_2,int *param_3)

{
  uint uVar1;
  int iVar2;
  ulong uVar3;
  long lVar4;
  undefined8 uVar5;
  int iVar6;
  int iVar7;
  undefined8 local_48;
  
  if ((DAT_09521c62 & 1) == 0) {
    FUN_03f5c2a4(&DAT_0918db18);
    DAT_09521c62 = 1;
  }
  lVar4 = DAT_0918db18;
  local_48 = 0;
  *param_3 = -1;
  if (*(int *)(lVar4 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar3 = System___DTString__GetNext(param_1,0);
  if ((uVar3 & 1) != 0) {
    if ((param_2 == 0) ||
       (lVar4 = System_Globalization_DateTimeFormatInfo__GetMonthName(param_2,0xd,0), lVar4 == 0)) {
LAB_075a8b40:
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    iVar7 = 0;
    iVar2 = 0xd;
    if (*(int *)(lVar4 + 0x10) != 0) {
      iVar2 = 0xe;
    }
    iVar6 = 1;
    do {
      lVar4 = System_Globalization_DateTimeFormatInfo__GetAbbreviatedMonthName(param_2,iVar6,0);
      if (lVar4 == 0) goto LAB_075a8b40;
      local_48 = CONCAT44(local_48._4_4_,*(undefined4 *)(lVar4 + 0x10));
      uVar3 = System_Globalization_DateTimeFormatInfo__get_HasSpacesInMonthNames(param_2,0);
      if ((uVar3 & 1) == 0) {
        if (*(int *)(DAT_0918db18 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        uVar3 = FUN_075ab390(param_1,lVar4,0);
      }
      else {
        if (*(int *)(DAT_0918db18 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        uVar3 = System___DTString__MatchSpecifiedWords(param_1,lVar4,0,&local_48,0);
      }
      if (((uVar3 & 1) != 0) && (iVar7 < (int)local_48)) {
        local_48 = CONCAT44((int)local_48,(int)local_48);
        *param_3 = iVar6;
        iVar7 = (int)local_48;
      }
      iVar6 = iVar6 + 1;
    } while (iVar2 != iVar6);
    uVar1 = System_Globalization_DateTimeFormatInfo__get_FormatFlags(param_2,0);
    if ((uVar1 >> 1 & 1) != 0) {
      uVar5 = System_Globalization_DateTimeFormatInfo__internalGetLeapYearMonthNames(param_2,0);
      if (*(int *)(DAT_0918db18 + 0xe4) == 0) {
        FUN_03f5c424(DAT_0918db18);
      }
      iVar2 = System___DTString__MatchLongestWords(param_1,uVar5,(long)&local_48 + 4,0);
      if (-1 < iVar2) {
        iVar2 = iVar2 + 1;
        *param_3 = iVar2;
        goto LAB_075a8b04;
      }
    }
  }
  iVar2 = *param_3;
LAB_075a8b04:
  if (0 < iVar2) {
    *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + local_48._4_4_ + -1;
  }
  return 0 < iVar2;
}

