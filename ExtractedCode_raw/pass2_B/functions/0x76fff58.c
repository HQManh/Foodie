// rea decompile_all
// name: Newtonsoft.Json.Linq.JsonPath.BooleanQueryExpression$$MatchTokens
// address: 0x76fff58
// body: available
// range: 0x76fff58-0x7700187 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8
Newtonsoft_Json_Linq_JsonPath_BooleanQueryExpression__MatchTokens
          (long param_1,long *param_2,long *param_3,undefined8 param_4)

{
  byte bVar1;
  int iVar2;
  ulong uVar3;
  
  if ((DAT_09522936 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09187278);
    DAT_09522936 = 1;
  }
  if (param_2 != (long *)0x0) {
    bVar1 = *(byte *)(DAT_09187278 + 0x130);
    if ((((bVar1 <= *(byte *)(*param_2 + 0x130)) && (param_3 != (long *)0x0)) &&
        (*(long *)(*(long *)(*param_2 + 200) + (ulong)bVar1 * 8 + -8) == DAT_09187278)) &&
       ((bVar1 <= *(byte *)(*param_3 + 0x130) &&
        (*(long *)(*(long *)(*param_3 + 200) + (ulong)bVar1 * 8 + -8) == DAT_09187278)))) {
      iVar2 = *(int *)(param_1 + 0x10);
      if (iVar2 < 6) {
        if (2 < iVar2) {
          if (iVar2 == 3) {
            return 1;
          }
          if (iVar2 == 4) {
            iVar2 = (int)param_2[6];
            if (iVar2 == 8) {
              iVar2 = (int)param_3[6];
            }
            iVar2 = Newtonsoft_Json_Linq_JValue__Compare(iVar2,param_2[7],param_3[7]);
            if (-1 < iVar2) {
              return 0;
            }
            return 1;
          }
          if (iVar2 != 5) {
            return 0;
          }
          iVar2 = (int)param_2[6];
          if (iVar2 == 8) {
            iVar2 = (int)param_3[6];
          }
          iVar2 = Newtonsoft_Json_Linq_JValue__Compare(iVar2,param_2[7],param_3[7]);
          if (0 < iVar2) {
            return 0;
          }
          return 1;
        }
        if (iVar2 == 1) {
          uVar3 = Newtonsoft_Json_Linq_JsonPath_BooleanQueryExpression__EqualsWithStringCoercion
                            (param_2,param_3);
          if ((uVar3 & 1) == 0) {
            return 0;
          }
          return 1;
        }
        if (iVar2 != 2) {
          return 0;
        }
        uVar3 = Newtonsoft_Json_Linq_JsonPath_BooleanQueryExpression__EqualsWithStringCoercion
                          (param_2,param_3);
      }
      else {
        if (iVar2 < 10) {
          if (iVar2 == 6) {
            iVar2 = (int)param_2[6];
            if (iVar2 == 8) {
              iVar2 = (int)param_3[6];
            }
            iVar2 = Newtonsoft_Json_Linq_JValue__Compare(iVar2,param_2[7],param_3[7]);
            if (iVar2 < 1) {
              return 0;
            }
            return 1;
          }
          if (iVar2 != 7) {
            return 0;
          }
          iVar2 = (int)param_2[6];
          if (iVar2 == 8) {
            iVar2 = (int)param_3[6];
          }
          iVar2 = Newtonsoft_Json_Linq_JValue__Compare(iVar2,param_2[7],param_3[7]);
          if (iVar2 < 0) {
            return 0;
          }
          return 1;
        }
        if (iVar2 != 0xc) {
          if (iVar2 == 0xb) {
            uVar3 = Newtonsoft_Json_Linq_JsonPath_BooleanQueryExpression__EqualsWithStrictMatch
                              (param_2,param_3);
          }
          else {
            if (iVar2 != 10) {
              return 0;
            }
            uVar3 = Newtonsoft_Json_Linq_JsonPath_BooleanQueryExpression__RegexEquals
                              (param_2,param_3,param_4);
          }
          if ((uVar3 & 1) != 0) {
            return 1;
          }
          return 0;
        }
        uVar3 = Newtonsoft_Json_Linq_JsonPath_BooleanQueryExpression__EqualsWithStrictMatch
                          (param_2,param_3);
      }
      if ((uVar3 & 1) == 0) {
        return 1;
      }
      return 0;
    }
  }
  if ((*(uint *)(param_1 + 0x10) & 0xfffffffe) == 2) {
    return 1;
  }
  return 0;
}

