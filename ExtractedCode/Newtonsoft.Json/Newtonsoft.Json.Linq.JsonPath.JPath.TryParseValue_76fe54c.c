// rea decompile_all
// name: Newtonsoft.Json.Linq.JsonPath.JPath$$TryParseValue
// address: 0x76fe54c
// body: available
// range: 0x76fe54c-0x76fe88b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x76fe888 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


uint Newtonsoft_Json_Linq_JsonPath_JPath__TryParseValue(long param_1,undefined8 *param_2)

{
  uint uVar1;
  int iVar2;
  undefined8 uVar3;
  ulong uVar4;
  long *plVar5;
  long lVar6;
  ulong local_48;
  ulong local_40;
  ulong local_38;
  
  if ((DAT_0952292a & 1) == 0) {
    FUN_03f5c2a4(&DAT_09182ff8);
    FUN_03f5c2a4(&DAT_09187228);
    FUN_03f5c2a4(&DAT_0918b348);
    FUN_03f5c2a4(&DAT_09220040);
    FUN_03f5c2a4(&DAT_0921b558);
    FUN_03f5c2a4(&DAT_09224438);
    DAT_0952292a = 1;
  }
  local_40 = 0;
  local_38 = 0;
  if (*(long *)(param_1 + 0x10) == 0) goto LAB_076fe888;
  uVar1 = System_String__get_Chars(*(long *)(param_1 + 0x10),*(undefined4 *)(param_1 + 0x20),0);
  if ((uVar1 & 0xffff) == 0x27) {
    uVar3 = Newtonsoft_Json_Linq_JsonPath_JPath__ReadQuotedString(param_1);
LAB_076fe5ec:
    *param_2 = uVar3;
LAB_076fe5f8:
    thunk_FUN_03f5d7b8(param_2,uVar3);
    uVar1 = 1;
  }
  else {
    if (*(int *)(DAT_09535460 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar4 = System_Char__IsDigit(uVar1,0);
    if (((uVar1 & 0xffff) == 0x2d) || ((uVar4 & 1) != 0)) {
      plVar5 = (long *)thunk_FUN_03f9944c(DAT_0918b348);
      System_Text_StringBuilder___ctor(plVar5,0);
      if (plVar5 == (long *)0x0) {
LAB_076fe888:
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      do {
        System_Text_StringBuilder__Append(plVar5,uVar1,0);
        lVar6 = *(long *)(param_1 + 0x10);
        iVar2 = *(int *)(param_1 + 0x20) + 1;
        *(int *)(param_1 + 0x20) = iVar2;
        if (lVar6 == 0) goto LAB_076fe888;
        if (*(int *)(lVar6 + 0x10) <= iVar2) goto LAB_076fe85c;
        uVar1 = System_String__get_Chars(lVar6,iVar2,0);
      } while (((uVar1 & 0xffff) != 0x29) && ((uVar1 & 0xffff) != 0x20));
      lVar6 = (**(code **)(*plVar5 + 0x168))(plVar5,*(undefined8 *)(*plVar5 + 0x170));
      if (*(int *)(DAT_09187228 + 0xe4) == 0) {
        FUN_03f5c424(DAT_09187228);
      }
      if (lVar6 == 0) goto LAB_076fe888;
      iVar2 = System_String__IndexOfAny(lVar6,**(undefined8 **)(DAT_09187228 + 0xb8),0);
      if (iVar2 == -1) {
        if (*(int *)(DAT_09182ff8 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        uVar3 = System_Globalization_CultureInfo__get_InvariantCulture(0);
        uVar1 = System_Int64__TryParse(lVar6,7,uVar3,&local_40,0);
        local_48 = local_40;
        uVar3 = DAT_09535440;
      }
      else {
        if (*(int *)(DAT_09182ff8 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        uVar3 = System_Globalization_CultureInfo__get_InvariantCulture(0);
        uVar1 = System_Double__TryParse(lVar6,0xe7,uVar3,&local_38,0);
        local_48 = local_38;
        uVar3 = DAT_09535458;
      }
LAB_076fe80c:
      uVar3 = FUN_03f5c42c(uVar3,&local_48);
      *param_2 = uVar3;
      thunk_FUN_03f5d7b8(param_2,uVar3);
      goto LAB_076fe870;
    }
    uVar1 = uVar1 & 0xffff;
    if (uVar1 < 0x6e) {
      if (uVar1 == 0x2f) {
        uVar3 = Newtonsoft_Json_Linq_JsonPath_JPath__ReadRegexString(param_1);
      }
      else {
        if ((uVar1 != 0x66) ||
           (uVar4 = Newtonsoft_Json_Linq_JsonPath_JPath__Match(param_1,DAT_0921b558),
           (uVar4 & 1) == 0)) goto LAB_076fe85c;
        local_48 = local_48 & 0xffffffffffffff00;
        uVar3 = FUN_03f5c42c(DAT_09535400,&local_48);
      }
      goto LAB_076fe5ec;
    }
    if (uVar1 == 0x6e) {
      uVar4 = Newtonsoft_Json_Linq_JsonPath_JPath__Match(param_1,DAT_09220040);
      if ((uVar4 & 1) != 0) {
        *param_2 = 0;
        uVar3 = 0;
        goto LAB_076fe5f8;
      }
    }
    else if ((uVar1 == 0x74) &&
            (uVar4 = Newtonsoft_Json_Linq_JsonPath_JPath__Match(param_1,DAT_09224438),
            (uVar4 & 1) != 0)) {
      uVar1 = 1;
      local_48 = CONCAT71(local_48._1_7_,1);
      uVar3 = DAT_09535400;
      goto LAB_076fe80c;
    }
LAB_076fe85c:
    *param_2 = 0;
    thunk_FUN_03f5d7b8(param_2,0);
    uVar1 = 0;
  }
LAB_076fe870:
  return uVar1 & 1;
}

