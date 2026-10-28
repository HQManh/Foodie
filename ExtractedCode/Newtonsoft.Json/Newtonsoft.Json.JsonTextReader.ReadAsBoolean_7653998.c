// rea decompile_all
// name: Newtonsoft.Json.JsonTextReader$$ReadAsBoolean
// address: 0x7653998
// body: available
// range: 0x7653998-0x7653f3f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x7653e74 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7653e78 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7653ea0 to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined2 Newtonsoft_Json_JsonTextReader__ReadAsBoolean(long *param_1)

{
  uint uVar1;
  ushort uVar2;
  int iVar3;
  long lVar4;
  byte bVar5;
  undefined2 uVar6;
  ulong uVar7;
  long *plVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined4 uVar13;
  long lVar14;
  bool bVar15;
  ulong uVar16;
  undefined4 local_3c;
  undefined1 local_38 [4];
  undefined2 local_34 [2];
  
  if ((DAT_095223b2 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09181b78);
    FUN_03f5c2a4(&DAT_09181f98);
    FUN_03f5c2a4(&DAT_09182b88);
    FUN_03f5c2a4(&DAT_09182ff8);
    FUN_03f5c2a4(&DAT_09187300);
    FUN_03f5c2a4(&DAT_091b6a48);
    DAT_095223b2 = 1;
  }
  Newtonsoft_Json_JsonTextReader__EnsureBuffer(param_1);
  uVar1 = *(uint *)((long)param_1 + 0x24);
  if (uVar1 < 0xd) {
    if ((1 << (ulong)(uVar1 & 0x1f) & 0x665U) == 0) {
      if (uVar1 != 8) {
        if (uVar1 == 0xc) {
          Newtonsoft_Json_JsonTextReader__ReadFinished(param_1);
          return 0;
        }
        goto LAB_07653ecc;
      }
      uVar16 = Newtonsoft_Json_JsonTextReader__ParsePostValue(param_1,1);
      if ((uVar16 & 1) != 0) {
        return 0;
      }
    }
    lVar14 = param_1[0x10];
    lVar4 = DAT_09535460;
    while( true ) {
      DAT_09535460 = lVar4;
      if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      uVar1 = *(uint *)((long)param_1 + 0x8c);
      if (*(uint *)(lVar14 + 0x18) <= uVar1) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c558();
      }
      uVar2 = *(ushort *)(lVar14 + (long)(int)uVar1 * 2 + 0x20);
      uVar16 = (ulong)uVar2;
      if (0x39 < uVar2) break;
      if (uVar2 == 0) {
        uVar16 = Newtonsoft_Json_JsonTextReader__ReadNullChar(param_1);
        if ((uVar16 & 1) != 0) {
          param_1[3] = 0;
          *(undefined4 *)(param_1 + 2) = 0;
          thunk_FUN_03f5d7b8(param_1 + 3,0);
          return 0;
        }
      }
      else {
        if (0x1f < uVar2) {
          if (uVar2 < 0x2c) {
            if (uVar2 == 0x20) goto LAB_07653b40;
            if ((uVar2 == 0x22) || (uVar2 == 0x27)) {
              Newtonsoft_Json_JsonTextReader__ParseString(param_1,uVar16,0);
              uVar10 = Newtonsoft_Json_Utilities_StringReference__ToString(param_1 + 0x16,0);
              uVar6 = Newtonsoft_Json_JsonReader__ReadBooleanString(param_1,uVar10);
              return uVar6;
            }
          }
          else if (uVar2 < 0x3a) {
            if (uVar16 == 0x2c) {
              Newtonsoft_Json_JsonTextReader__ProcessValueComma(param_1);
            }
            else {
              if (uVar16 != 0x2f) {
                if ((1L << (uVar16 & 0x3f) & 0x3ff600000000000U) != 0) {
                  Newtonsoft_Json_JsonTextReader__ParseNumber(param_1,0);
                  plVar8 = (long *)(**(code **)(*param_1 + 0x248))
                                             (param_1,*(undefined8 *)(*param_1 + 0x250));
                  if ((plVar8 == (long *)0x0) || (*plVar8 != DAT_09181b78)) {
                    uVar10 = (**(code **)(*param_1 + 0x248))
                                       (param_1,*(undefined8 *)(*param_1 + 0x250));
                    if (*(int *)(DAT_09182ff8 + 0xe4) == 0) {
                      FUN_03f5c424(DAT_09182ff8);
                    }
                    uVar11 = System_Globalization_CultureInfo__get_InvariantCulture(0);
                    if (*(int *)(DAT_09182b88 + 0xe4) == 0) {
                      FUN_03f5c424(DAT_09182b88);
                    }
                    bVar5 = System_Convert__ToBoolean(uVar10,uVar11,0);
                  }
                  else {
                    puVar9 = (undefined8 *)FUN_039aef84();
                    uVar10 = *puVar9;
                    uVar11 = puVar9[1];
                    if (*(int *)(DAT_09181b78 + 0xe4) == 0) {
                      FUN_03f5c424();
                    }
                    bVar5 = System_Numerics_BigInteger__op_Inequality(uVar10,uVar11,0,0);
                  }
                  bVar15 = (bool)(bVar5 & 1);
                  local_38[0] = bVar15;
                  lVar14 = FUN_03f5c42c(DAT_09535400,local_38);
                  param_1[3] = lVar14;
                  *(undefined4 *)(param_1 + 2) = 10;
                  thunk_FUN_03f5d7b8(param_1 + 3,lVar14);
                  uVar13 = 8;
                  if (((int)param_1[5] == 0) &&
                     (uVar13 = 0xc, *(char *)((long)param_1 + 0x71) != '\0')) {
                    uVar13 = 8;
                  }
                  *(undefined4 *)((long)param_1 + 0x24) = uVar13;
                  goto LAB_07653e4c;
                }
                goto LAB_07653ad4;
              }
              Newtonsoft_Json_JsonTextReader__ParseComment(param_1,0);
            }
            goto LAB_07653b6c;
          }
          goto LAB_07653ad4;
        }
        if (uVar2 == 9) {
LAB_07653b40:
          *(uint *)((long)param_1 + 0x8c) = uVar1 + 1;
        }
        else if (uVar2 == 10) {
          *(uint *)((long)param_1 + 0x8c) = uVar1 + 1;
          *(uint *)(param_1 + 0x12) = uVar1 + 1;
          *(int *)((long)param_1 + 0x94) = *(int *)((long)param_1 + 0x94) + 1;
        }
        else {
          if (uVar2 != 0xd) goto LAB_07653ad4;
          Newtonsoft_Json_JsonTextReader__ProcessCarriageReturn(param_1,0);
        }
      }
LAB_07653b6c:
      lVar14 = param_1[0x10];
      lVar4 = DAT_09535460;
    }
    if (uVar2 < 0x67) {
      if (uVar2 != 0x5d) {
        if (uVar2 == 0x66) {
          if (*(int *)(DAT_09187300 + 0xe4) == 0) {
            FUN_03f5c424();
          }
          puVar9 = (undefined8 *)(*(long *)(DAT_09187300 + 0xb8) + 0x10);
          goto LAB_07653d44;
        }
        goto LAB_07653ad4;
      }
      *(uint *)((long)param_1 + 0x8c) = uVar1 + 1;
      if ((*(int *)((long)param_1 + 0x24) - 5U < 2) || (*(int *)((long)param_1 + 0x24) == 8)) {
        *(undefined4 *)(param_1 + 2) = 0xe;
        param_1[3] = 0;
        thunk_FUN_03f5d7b8(param_1 + 3,0);
        Newtonsoft_Json_JsonReader__ValidateEnd(param_1,0xe);
        return 0;
      }
      uVar16 = 0x5d;
    }
    else {
      if (uVar2 == 0x6e) {
        Newtonsoft_Json_JsonTextReader__HandleNull(param_1);
        return 0;
      }
      if (uVar2 == 0x74) {
        if (*(int *)(DAT_09187300 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        puVar9 = (undefined8 *)(*(long *)(DAT_09187300 + 0xb8) + 8);
LAB_07653d44:
        uVar16 = Newtonsoft_Json_JsonTextReader__MatchValueWithTrailingSeparator(param_1,*puVar9);
        if ((uVar16 & 1) != 0) {
          if (*(int *)(DAT_09181f98 + 0xe4) == 0) {
            FUN_03f5c424();
          }
          bVar15 = 0x66 < uVar2;
          uVar10 = Newtonsoft_Json_Utilities_BoxedPrimitives__Get(bVar15,0);
          Newtonsoft_Json_JsonReader__SetToken(param_1,10,uVar10,1);
LAB_07653e4c:
          local_34[0] = 0;
          FUN_05c290f8(local_34,bVar15,DAT_091b6a48);
          return local_34[0];
        }
        lVar14 = param_1[0x10];
        iVar3 = *(int *)((long)param_1 + 0x8c);
        FUN_039b1d98(lVar14);
        uVar16 = FUN_03ebadd8(lVar14,(long)iVar3);
        uVar16 = uVar16 & 0xffffffff;
      }
      else {
LAB_07653ad4:
        *(uint *)((long)param_1 + 0x8c) = uVar1 + 1;
        if (*(int *)(lVar4 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        uVar7 = System_Char__IsWhiteSpace(uVar16,0);
        if ((uVar7 & 1) != 0) goto LAB_07653b6c;
      }
    }
    uVar10 = Newtonsoft_Json_JsonTextReader__CreateUnexpectedCharacterException(param_1,uVar16);
  }
  else {
LAB_07653ecc:
    thunk_FUN_03fc39d4(&DAT_09182ff8);
    FUN_039afb80();
    uVar10 = System_Globalization_CultureInfo__get_InvariantCulture(0);
    local_3c = *(undefined4 *)((long)param_1 + 0x24);
    uVar11 = thunk_FUN_03fc39d4(&DAT_09191fb8);
    uVar11 = FUN_03f5c42c(uVar11,&local_3c);
    uVar12 = thunk_FUN_03fc39d4(&DAT_09211e30);
    uVar10 = Newtonsoft_Json_Utilities_StringUtils__FormatWith(uVar12,uVar10,uVar11,0);
    uVar10 = Newtonsoft_Json_JsonReaderException__Create(param_1,uVar10);
  }
  uVar11 = thunk_FUN_03fc39d4(&DAT_091d1c98);
                    /* WARNING: Subroutine does not return */
  FUN_03f5c414(uVar10,uVar11);
}

