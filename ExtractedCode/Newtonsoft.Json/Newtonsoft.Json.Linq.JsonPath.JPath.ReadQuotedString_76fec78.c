// rea decompile_all
// name: Newtonsoft.Json.Linq.JsonPath.JPath$$ReadQuotedString
// address: 0x76fec78
// body: available
// range: 0x76fec78-0x76fef53 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x76fee84 to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x76feec4 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x76fef3c to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x76fef48 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void Newtonsoft_Json_Linq_JsonPath_JPath__ReadQuotedString(long param_1)

{
  bool bVar1;
  undefined2 uVar2;
  uint uVar3;
  uint uVar4;
  long *plVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  int iVar9;
  undefined2 local_24 [2];
  
  if ((DAT_0952292b & 1) == 0) {
    FUN_03f5c2a4(&DAT_0918b348);
    DAT_0952292b = 1;
  }
  local_24[0] = 0;
  plVar5 = (long *)thunk_FUN_03f9944c(DAT_0918b348);
  System_Text_StringBuilder___ctor(plVar5,0);
  lVar6 = *(long *)(param_1 + 0x10);
  *(int *)(param_1 + 0x20) = *(int *)(param_1 + 0x20) + 1;
  if (lVar6 == 0) {
    uVar2 = 0;
LAB_076fef44:
    local_24[0] = uVar2;
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  iVar9 = *(int *)(param_1 + 0x20);
  if (iVar9 < *(int *)(lVar6 + 0x10)) {
    do {
      uVar3 = System_String__get_Chars(lVar6,iVar9,0);
      uVar2 = (undefined2)uVar3;
      if ((uVar3 & 0xffff) == 0x5c) {
        lVar6 = *(long *)(param_1 + 0x10);
        if (lVar6 == 0) {
          local_24[0] = 0x5c;
          goto LAB_076feec4;
        }
        iVar9 = *(int *)(param_1 + 0x20) + 1;
        if (*(int *)(lVar6 + 0x10) <= iVar9) goto LAB_076fed70;
        *(int *)(param_1 + 0x20) = iVar9;
        uVar4 = System_String__get_Chars(lVar6,iVar9,0);
        uVar2 = (undefined2)uVar4;
        uVar3 = uVar4 & 0xffff;
        if (uVar3 < 0x5d) {
          if (uVar3 < 0x28) {
            if ((uVar4 & 0xffff) != 0x22) {
              bVar1 = (uVar4 & 0xffff) == 0x27;
LAB_076fedc4:
              if (!bVar1) {
LAB_076feec8:
                local_24[0] = uVar2;
                FUN_039afb80(DAT_09535460);
                uVar7 = System_Char__ToString(local_24,0);
                uVar8 = thunk_FUN_03fc39d4(&DAT_092123f8);
                uVar7 = System_String__Concat(uVar8,uVar7,0);
                thunk_FUN_03fc39d4(&DAT_09187348);
                uVar8 = thunk_FUN_03f9944c();
                Newtonsoft_Json_JsonException___ctor(uVar8,uVar7,0);
                uVar7 = thunk_FUN_03fc39d4(&DAT_091d1328);
                    /* WARNING: Subroutine does not return */
                FUN_03f5c414(uVar8,uVar7);
              }
            }
          }
          else if ((uVar4 & 0xffff) != 0x2f) {
            bVar1 = (uVar4 & 0xffff) == 0x5c;
            goto LAB_076fedc4;
          }
        }
        else if (uVar3 < 0x67) {
          if ((uVar4 & 0xffff) == 0x62) {
            uVar4 = 8;
          }
          else {
            if ((uVar4 & 0xffff) != 0x66) goto LAB_076feec8;
            uVar4 = 0xc;
          }
        }
        else {
          uVar4 = uVar4 & 0xffff;
          if (uVar4 == 0x6e) {
            uVar4 = 10;
          }
          else if (uVar4 == 0x72) {
            uVar4 = 0xd;
          }
          else {
            if (uVar4 != 0x74) goto LAB_076feec8;
            uVar4 = 9;
          }
        }
        if (plVar5 == (long *)0x0) goto LAB_076fef44;
        System_Text_StringBuilder__Append(plVar5,uVar4,0);
        *(int *)(param_1 + 0x20) = *(int *)(param_1 + 0x20) + 1;
      }
      else {
        if ((uVar3 & 0xffff) == 0x27) {
          local_24[0] = 0x27;
          *(int *)(param_1 + 0x20) = *(int *)(param_1 + 0x20) + 1;
          if (plVar5 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x076feeb8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (**(code **)(*plVar5 + 0x168))(plVar5,*(undefined8 *)(*plVar5 + 0x170));
            return;
          }
LAB_076feec4:
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        iVar9 = *(int *)(param_1 + 0x20) + 1;
LAB_076fed70:
        *(int *)(param_1 + 0x20) = iVar9;
        if (plVar5 == (long *)0x0) goto LAB_076fef44;
        System_Text_StringBuilder__Append(plVar5,uVar3,0);
      }
      lVar6 = *(long *)(param_1 + 0x10);
      if (lVar6 == 0) goto LAB_076fef44;
      iVar9 = *(int *)(param_1 + 0x20);
    } while (iVar9 < *(int *)(lVar6 + 0x10));
  }
  else {
    uVar2 = 0;
  }
  local_24[0] = uVar2;
  thunk_FUN_03fc39d4(&DAT_09187348);
  uVar7 = thunk_FUN_03f9944c();
  uVar8 = thunk_FUN_03fc39d4(&DAT_0920a608);
  Newtonsoft_Json_JsonException___ctor(uVar7,uVar8,0);
  uVar8 = thunk_FUN_03fc39d4(&DAT_091d1328);
                    /* WARNING: Subroutine does not return */
  FUN_03f5c414(uVar7,uVar8);
}

