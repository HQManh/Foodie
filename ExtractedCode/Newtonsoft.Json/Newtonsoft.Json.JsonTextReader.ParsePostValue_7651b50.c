// rea decompile_all
// name: Newtonsoft.Json.JsonTextReader$$ParsePostValue
// address: 0x7651b50
// body: available
// range: 0x7651b50-0x7651dfb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x7651d80 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7651d84 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7651df8 to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 Newtonsoft_Json_JsonTextReader__ParsePostValue(long *param_1,uint param_2)

{
  ushort uVar1;
  uint uVar2;
  int iVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  ushort local_34 [2];
  
  lVar8 = param_1[0x10];
  if (lVar8 != 0) {
    do {
      uVar2 = *(uint *)((long)param_1 + 0x8c);
      if (*(uint *)(lVar8 + 0x18) <= uVar2) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c558();
      }
      uVar1 = *(ushort *)(lVar8 + (long)(int)uVar2 * 2 + 0x20);
      if (uVar1 < 0x2a) {
        if (0xd < uVar1) {
          if (uVar1 == 0x20) goto LAB_07651c74;
          if (uVar1 == 0x29) {
            *(uint *)((long)param_1 + 0x8c) = uVar2 + 1;
            *(undefined4 *)(param_1 + 2) = 0xf;
            param_1[3] = 0;
            thunk_FUN_03f5d7b8(param_1 + 3,0);
            uVar5 = 0xf;
            goto LAB_07651d4c;
          }
          goto LAB_07651c0c;
        }
        if (uVar1 != 0) {
          if (uVar1 != 9) {
            if (uVar1 == 10) {
              *(uint *)((long)param_1 + 0x8c) = uVar2 + 1;
              *(uint *)(param_1 + 0x12) = uVar2 + 1;
              *(int *)((long)param_1 + 0x94) = *(int *)((long)param_1 + 0x94) + 1;
            }
            else {
              if (uVar1 != 0xd) goto LAB_07651c0c;
              Newtonsoft_Json_JsonTextReader__ProcessCarriageReturn(param_1,0);
            }
            goto LAB_07651c78;
          }
          goto LAB_07651c74;
        }
        if (*(uint *)(param_1 + 0x11) != uVar2) goto LAB_07651c74;
        uVar5 = Newtonsoft_Json_JsonTextReader__ReadData(param_1,0,0);
        if ((int)uVar5 == 0) {
          *(undefined4 *)((long)param_1 + 0x24) = 0xc;
          return uVar5;
        }
      }
      else {
        if (uVar1 < 0x30) {
          if (uVar1 == 0x2f) {
            Newtonsoft_Json_JsonTextReader__ParseComment(param_1,(param_2 ^ 1) & 1);
            if ((param_2 & 1) == 0) {
              return 1;
            }
            goto LAB_07651c78;
          }
          if (uVar1 == 0x2c) {
            *(uint *)((long)param_1 + 0x8c) = uVar2 + 1;
            goto LAB_07651cbc;
          }
        }
        else {
          if (uVar1 == 0x5d) {
            *(uint *)((long)param_1 + 0x8c) = uVar2 + 1;
            *(undefined4 *)(param_1 + 2) = 0xe;
            param_1[3] = 0;
            thunk_FUN_03f5d7b8(param_1 + 3,0);
            uVar5 = 0xe;
LAB_07651d4c:
            Newtonsoft_Json_JsonReader__ValidateEnd(param_1,uVar5);
            return 1;
          }
          if (uVar1 == 0x7d) {
            *(uint *)((long)param_1 + 0x8c) = uVar2 + 1;
            *(undefined4 *)(param_1 + 2) = 0xd;
            param_1[3] = 0;
            thunk_FUN_03f5d7b8(param_1 + 3,0);
            uVar5 = 0xd;
            goto LAB_07651d4c;
          }
        }
LAB_07651c0c:
        if (*(int *)(DAT_09535460 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        uVar4 = System_Char__IsWhiteSpace(uVar1,0);
        if ((uVar4 & 1) == 0) {
          if ((*(char *)((long)param_1 + 0x71) == '\0') ||
             (iVar3 = (**(code **)(*param_1 + 0x268))(param_1,*(undefined8 *)(*param_1 + 0x270)),
             iVar3 != 0)) {
            thunk_FUN_03fc39d4(&DAT_09182ff8);
            FUN_039afb80();
            uVar5 = System_Globalization_CultureInfo__get_InvariantCulture(0);
            local_34[0] = uVar1;
            uVar6 = FUN_03f5c42c(DAT_09535460,local_34);
            uVar7 = thunk_FUN_03fc39d4(&DAT_091fb688);
            uVar5 = Newtonsoft_Json_Utilities_StringUtils__FormatWith(uVar7,uVar5,uVar6,0);
            uVar5 = Newtonsoft_Json_JsonReaderException__Create(param_1,uVar5);
            uVar6 = thunk_FUN_03fc39d4(&DAT_091d1c50);
                    /* WARNING: Subroutine does not return */
            FUN_03f5c414(uVar5,uVar6);
          }
LAB_07651cbc:
          Newtonsoft_Json_JsonReader__SetStateBasedOnCurrent(param_1);
          return 0;
        }
        uVar2 = *(uint *)((long)param_1 + 0x8c);
LAB_07651c74:
        *(uint *)((long)param_1 + 0x8c) = uVar2 + 1;
      }
LAB_07651c78:
      lVar8 = param_1[0x10];
    } while (lVar8 != 0);
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

