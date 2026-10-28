// rea decompile_all
// name: Newtonsoft.Json.JsonReader$$ReadAsBytes
// address: 0x7644bf8
// body: available
// range: 0x7644bf8-0x7644fcb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x7644cfc to 0x3f5c8d0 FUN_03f5c8d0 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7644e30 to 0x76451f4 Newtonsoft.Json.JsonReader$$ReadArrayIntoByteArray (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x7644fbc to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7644fc0 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7644fc8 to 0x3f5c8d0 FUN_03f5c8d0 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long Newtonsoft_Json_JsonReader__ReadAsBytes(long *param_1)

{
  int iVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined4 uVar10;
  int local_44;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  undefined8 uStack_28;
  
  if ((DAT_09522304 & 1) == 0) {
    FUN_03f5c2a4(&DAT_0917fc88);
    FUN_03f5c2a4(&DAT_091c4ec0);
    FUN_03f5c2a4(&DAT_09182b90);
    FUN_03f5c2a4(&DAT_09182b88);
    FUN_03f5c2a4(&DAT_09184f30);
    DAT_09522304 = 1;
  }
  local_30 = 0;
  uStack_28 = 0;
  local_40 = 0;
  uStack_38 = 0;
  iVar1 = Newtonsoft_Json_JsonReader__GetContentToken(param_1);
  if (iVar1 < 10) {
    if (iVar1 < 2) {
      if (iVar1 == 0) {
        return 0;
      }
      if (iVar1 == 1) {
        Newtonsoft_Json_JsonReader__ReadIntoWrappedTypeObject(param_1);
        lVar3 = (**(code **)(*param_1 + 0x2b8))(param_1,*(undefined8 *)(*param_1 + 0x2c0));
        Newtonsoft_Json_JsonReader__ReaderReadAndAssert(param_1);
        iVar1 = (**(code **)(*param_1 + 0x238))(param_1,*(undefined8 *)(*param_1 + 0x240));
        if (iVar1 != 0xd) {
          thunk_FUN_03fc39d4(&DAT_09182ff8);
          FUN_039afb80();
          uVar7 = System_Globalization_CultureInfo__get_InvariantCulture(0);
          local_44 = (**(code **)(*param_1 + 0x238))(param_1,*(undefined8 *)(*param_1 + 0x240));
          goto LAB_07644f64;
        }
LAB_07644eec:
        param_1[3] = lVar3;
LAB_07644ef8:
        *(undefined4 *)(param_1 + 2) = 0x11;
        thunk_FUN_03f5d7b8(param_1 + 3,lVar3);
        uVar10 = 8;
        if (((int)param_1[5] == 0) && (uVar10 = 0xc, *(char *)((long)param_1 + 0x71) != '\0')) {
          uVar10 = 8;
        }
        *(undefined4 *)((long)param_1 + 0x24) = uVar10;
        return lVar3;
      }
    }
    else {
      if (iVar1 == 2) {
        lVar3 = Newtonsoft_Json_JsonReader__ReadArrayIntoByteArray(param_1);
        return lVar3;
      }
      if (iVar1 == 9) {
        plVar2 = (long *)(**(code **)(*param_1 + 0x248))(param_1,*(undefined8 *)(*param_1 + 0x250));
        lVar3 = DAT_091c4ec0;
        if (plVar2 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        if (*plVar2 != DAT_09535468) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c8d0(plVar2);
        }
        if ((int)plVar2[2] == 0) {
          lVar4 = *(long *)(DAT_091c4ec0 + 0x38);
          if (lVar4 == 0) {
            FUN_03f95ac8(DAT_091c4ec0);
            lVar4 = *(long *)(lVar3 + 0x38);
          }
          lVar4 = *(long *)(lVar4 + 0x10);
          if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
            lVar4 = FUN_03f95a6c();
          }
          if (*(int *)(lVar4 + 0xe4) == 0) {
            FUN_03f5c424();
          }
          lVar3 = *(long *)(*(long *)(lVar3 + 0x38) + 0x10);
          if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
            lVar3 = FUN_03f95a6c();
          }
          lVar3 = **(long **)(lVar3 + 0xb8);
        }
        else {
          if (*(int *)(DAT_09182b90 + 0xe4) == 0) {
            FUN_03f5c424();
          }
          uVar5 = Newtonsoft_Json_Utilities_ConvertUtils__TryConvertGuid(plVar2,&local_40,0);
          if ((uVar5 & 1) == 0) {
            if (*(int *)(DAT_09182b88 + 0xe4) == 0) {
              FUN_03f5c424();
            }
            lVar3 = System_Convert__FromBase64String(plVar2,0);
          }
          else {
            lVar3 = System_Guid__ToByteArray(&local_40,0);
          }
        }
        goto LAB_07644eec;
      }
    }
  }
  else {
    if (iVar1 == 0xb) {
      return 0;
    }
    if (iVar1 == 0xe) {
      return 0;
    }
    if (iVar1 == 0x11) {
      plVar2 = (long *)(**(code **)(*param_1 + 0x248))(param_1,*(undefined8 *)(*param_1 + 0x250));
      if ((plVar2 == (long *)0x0) || (*plVar2 != DAT_09184f30)) {
        lVar3 = (**(code **)(*param_1 + 0x248))(param_1,*(undefined8 *)(*param_1 + 0x250));
        uVar7 = DAT_0917fc88;
        if (lVar3 == 0) {
          return 0;
        }
        lVar4 = thunk_FUN_03f99350(lVar3,DAT_0917fc88);
        if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c8d0(lVar3,uVar7);
        }
        return lVar4;
      }
      puVar6 = (undefined8 *)thunk_FUN_03f99594();
      uStack_28 = puVar6[1];
      local_30 = *puVar6;
      lVar3 = System_Guid__ToByteArray(&local_30,0);
      param_1[3] = lVar3;
      goto LAB_07644ef8;
    }
  }
  thunk_FUN_03fc39d4(&DAT_09182ff8);
  FUN_039afb80();
  uVar7 = System_Globalization_CultureInfo__get_InvariantCulture(0);
  local_44 = iVar1;
LAB_07644f64:
  uVar8 = thunk_FUN_03fc39d4(&DAT_09187478);
  uVar8 = FUN_03f5c42c(uVar8,&local_44);
  uVar9 = thunk_FUN_03fc39d4(&DAT_09201978);
  uVar7 = Newtonsoft_Json_Utilities_StringUtils__FormatWith(uVar9,uVar7,uVar8,0);
  uVar7 = Newtonsoft_Json_JsonReaderException__Create(param_1,uVar7);
  uVar8 = thunk_FUN_03fc39d4(&DAT_091d1910);
                    /* WARNING: Subroutine does not return */
  FUN_03f5c414(uVar7,uVar8);
}

