// rea decompile_all
// name: Newtonsoft.Json.JsonTextReader$$ReadAsBytes
// address: 0x7652c30
// body: available
// range: 0x7652c30-0x76530cb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x7652e0c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7652fc4 to 0x76451f4 Newtonsoft.Json.JsonReader$$ReadArrayIntoByteArray (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x7652fc8 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7652ff0 to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7652ffc to 0x3f5c8d0 FUN_03f5c8d0 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long Newtonsoft_Json_JsonTextReader__ReadAsBytes(long *param_1)

{
  uint uVar1;
  bool bVar2;
  int iVar3;
  ulong uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined *puVar8;
  undefined8 uVar9;
  ushort uVar10;
  undefined4 uVar11;
  long lVar12;
  undefined4 local_38;
  undefined4 local_34;
  
  if ((DAT_095223ae & 1) == 0) {
    FUN_03f5c2a4(&DAT_0917fc88);
    DAT_095223ae = 1;
  }
  Newtonsoft_Json_JsonTextReader__EnsureBuffer(param_1);
  uVar1 = *(uint *)((long)param_1 + 0x24);
  if (0xc < uVar1) {
LAB_07653058:
    thunk_FUN_03fc39d4(&DAT_09182ff8);
    FUN_039afb80();
    uVar6 = System_Globalization_CultureInfo__get_InvariantCulture(0);
    local_38 = *(undefined4 *)((long)param_1 + 0x24);
    uVar7 = thunk_FUN_03fc39d4(&DAT_09191fb8);
    uVar7 = FUN_03f5c42c(uVar7,&local_38);
    puVar8 = &DAT_09211e30;
LAB_0765309c:
    uVar9 = thunk_FUN_03fc39d4(puVar8);
    uVar6 = Newtonsoft_Json_Utilities_StringUtils__FormatWith(uVar9,uVar6,uVar7,0);
    uVar6 = Newtonsoft_Json_JsonReaderException__Create(param_1,uVar6);
LAB_07652fd8:
    uVar7 = thunk_FUN_03fc39d4(&DAT_091d1ca0);
                    /* WARNING: Subroutine does not return */
    FUN_03f5c414(uVar6,uVar7);
  }
  if ((1 << (ulong)(uVar1 & 0x1f) & 0x665U) == 0) {
    if (uVar1 == 8) {
      uVar4 = Newtonsoft_Json_JsonTextReader__ParsePostValue(param_1,1);
      if ((uVar4 & 1) == 0) goto LAB_07652c8c;
    }
    else {
      if (uVar1 != 0xc) goto LAB_07653058;
      Newtonsoft_Json_JsonTextReader__ReadFinished(param_1);
    }
    return 0;
  }
LAB_07652c8c:
  lVar12 = param_1[0x10];
  if (lVar12 != 0) {
    bVar2 = false;
    do {
      lVar5 = DAT_09535460;
      uVar1 = *(uint *)((long)param_1 + 0x8c);
      if (*(uint *)(lVar12 + 0x18) <= uVar1) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c558();
      }
      uVar10 = *(ushort *)(lVar12 + (long)(int)uVar1 * 2 + 0x20);
      if (uVar10 < 0x28) {
        if (uVar10 < 0xe) {
          if (uVar10 == 0) {
            uVar4 = Newtonsoft_Json_JsonTextReader__ReadNullChar(param_1);
            if ((uVar4 & 1) != 0) {
              *(undefined4 *)(param_1 + 2) = 0;
              param_1[3] = 0;
              thunk_FUN_03f5d7b8(param_1 + 3,0);
              return 0;
            }
          }
          else {
            if (uVar10 == 9) goto LAB_07652d7c;
            if (uVar10 == 10) {
              *(uint *)((long)param_1 + 0x8c) = uVar1 + 1;
              *(uint *)(param_1 + 0x12) = uVar1 + 1;
              *(int *)((long)param_1 + 0x94) = *(int *)((long)param_1 + 0x94) + 1;
            }
            else {
              if (uVar10 != 0xd) goto LAB_07652d50;
              Newtonsoft_Json_JsonTextReader__ProcessCarriageReturn(param_1,0);
            }
          }
        }
        else {
          if (uVar10 != 0x20) {
            if ((uVar10 != 0x22) && (uVar10 != 0x27)) goto LAB_07652d50;
            Newtonsoft_Json_JsonTextReader__ParseString(param_1,uVar10,3);
            lVar12 = (**(code **)(*param_1 + 0x248))(param_1,*(undefined8 *)(*param_1 + 0x250));
            uVar6 = DAT_0917fc88;
            if (lVar12 == 0) {
              lVar5 = 0;
            }
            else {
              lVar5 = thunk_FUN_03f99350(lVar12,DAT_0917fc88);
              if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_03f5c8d0(lVar12,uVar6);
              }
            }
            if (!bVar2) {
              return lVar5;
            }
            Newtonsoft_Json_JsonReader__ReaderReadAndAssert(param_1);
            iVar3 = (**(code **)(*param_1 + 0x238))(param_1,*(undefined8 *)(*param_1 + 0x240));
            if (iVar3 == 0xd) {
              *(undefined4 *)(param_1 + 2) = 0x11;
              param_1[3] = lVar5;
              thunk_FUN_03f5d7b8(param_1 + 3,lVar5);
              uVar11 = 8;
              if (((int)param_1[5] == 0) && (uVar11 = 0xc, *(char *)((long)param_1 + 0x71) != '\0'))
              {
                uVar11 = 8;
              }
              *(undefined4 *)((long)param_1 + 0x24) = uVar11;
              return lVar5;
            }
            thunk_FUN_03fc39d4(&DAT_09182ff8);
            FUN_039afb80();
            uVar6 = System_Globalization_CultureInfo__get_InvariantCulture(0);
            local_34 = (**(code **)(*param_1 + 0x238))(param_1,*(undefined8 *)(*param_1 + 0x240));
            uVar7 = thunk_FUN_03fc39d4(&DAT_09187478);
            uVar7 = FUN_03f5c42c(uVar7,&local_34);
            puVar8 = &DAT_09201978;
            goto LAB_0765309c;
          }
LAB_07652d7c:
          *(uint *)((long)param_1 + 0x8c) = uVar1 + 1;
        }
      }
      else if (uVar10 < 0x5c) {
        if (uVar10 == 0x2c) {
          Newtonsoft_Json_JsonTextReader__ProcessValueComma(param_1);
        }
        else if (uVar10 == 0x2f) {
          Newtonsoft_Json_JsonTextReader__ParseComment(param_1,0);
        }
        else {
          if (uVar10 == 0x5b) {
            *(uint *)((long)param_1 + 0x8c) = uVar1 + 1;
            *(undefined4 *)(param_1 + 2) = 2;
            param_1[3] = 0;
            thunk_FUN_03f5d7b8(param_1 + 3,0);
            *(undefined4 *)((long)param_1 + 0x24) = 5;
            Newtonsoft_Json_JsonReader__Push(param_1,2);
            lVar12 = Newtonsoft_Json_JsonReader__ReadArrayIntoByteArray(param_1);
            return lVar12;
          }
LAB_07652d50:
          *(uint *)((long)param_1 + 0x8c) = uVar1 + 1;
          if (*(int *)(lVar5 + 0xe4) == 0) {
            FUN_03f5c424();
          }
          uVar4 = System_Char__IsWhiteSpace(uVar10,0);
          if ((uVar4 & 1) == 0) goto LAB_07652fd4;
        }
      }
      else {
        if (uVar10 != 0x7b) {
          if (uVar10 != 0x5d) {
            if (uVar10 == 0x6e) {
              Newtonsoft_Json_JsonTextReader__HandleNull(param_1);
              return 0;
            }
            goto LAB_07652d50;
          }
          *(uint *)((long)param_1 + 0x8c) = uVar1 + 1;
          if ((*(int *)((long)param_1 + 0x24) - 5U < 2) || (*(int *)((long)param_1 + 0x24) == 8)) {
            *(undefined4 *)(param_1 + 2) = 0xe;
            param_1[3] = 0;
            thunk_FUN_03f5d7b8(param_1 + 3,0);
            Newtonsoft_Json_JsonReader__ValidateEnd(param_1,0xe);
            return 0;
          }
          uVar10 = 0x5d;
LAB_07652fd4:
          uVar6 = Newtonsoft_Json_JsonTextReader__CreateUnexpectedCharacterException(param_1,uVar10)
          ;
          goto LAB_07652fd8;
        }
        bVar2 = true;
        *(uint *)((long)param_1 + 0x8c) = uVar1 + 1;
        *(undefined4 *)(param_1 + 2) = 1;
        param_1[3] = 0;
        thunk_FUN_03f5d7b8(param_1 + 3,0);
        *(undefined4 *)((long)param_1 + 0x24) = 3;
        Newtonsoft_Json_JsonReader__Push(param_1,1);
        Newtonsoft_Json_JsonReader__ReadIntoWrappedTypeObject(param_1);
      }
      lVar12 = param_1[0x10];
    } while (lVar12 != 0);
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

