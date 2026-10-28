// rea decompile_all
// name: Newtonsoft.Json.Converters.BinaryConverter$$ReadByteArray
// address: 0x7703448
// body: available
// range: 0x7703448-0x77036e7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x7703644 to 0x5723350 FUN_05723350 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x7703648 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x77036e4 to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void Newtonsoft_Json_Converters_BinaryConverter__ReadByteArray(undefined8 param_1,long *param_2)

{
  uint uVar1;
  long lVar2;
  int iVar3;
  undefined4 uVar4;
  long lVar5;
  ulong uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long lVar10;
  undefined4 local_44;
  
  if ((DAT_09522951 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09182b88);
    FUN_03f5c2a4(&DAT_09182ff8);
    FUN_03f5c2a4(&DAT_091ab728);
    FUN_03f5c2a4(&DAT_091ab740);
    FUN_03f5c2a4(&DAT_091ab710);
    FUN_03f5c2a4(&DAT_0917bdb8);
    DAT_09522951 = 1;
  }
  lVar5 = thunk_FUN_03f9944c(DAT_0917bdb8);
  FUN_05720f1c(lVar5,DAT_091ab710);
  if (param_2 == (long *)0x0) {
LAB_07703648:
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  uVar6 = (**(code **)(*param_2 + 0x288))(param_2,*(undefined8 *)(*param_2 + 0x290));
  do {
    if ((uVar6 & 1) == 0) {
      uVar7 = thunk_FUN_03fc39d4(&DAT_09211d20);
LAB_077036bc:
      uVar7 = Newtonsoft_Json_JsonSerializationException__Create(param_2,uVar7,0);
      uVar8 = thunk_FUN_03fc39d4(&DAT_091c38c0);
                    /* WARNING: Subroutine does not return */
      FUN_03f5c414(uVar7,uVar8);
    }
    iVar3 = (**(code **)(*param_2 + 0x238))(param_2,*(undefined8 *)(*param_2 + 0x240));
    if (iVar3 != 5) {
      if (iVar3 != 7) {
        if (iVar3 == 0xe) {
          if (lVar5 != 0) {
            FUN_05723350(lVar5,DAT_091ab740);
            return;
          }
          goto LAB_07703648;
        }
        thunk_FUN_03fc39d4(&DAT_09182ff8);
        FUN_039afb80();
        uVar7 = System_Globalization_CultureInfo__get_InvariantCulture(0);
        FUN_039b1d98(param_2);
        local_44 = (**(code **)(*param_2 + 0x238))(param_2,*(undefined8 *)(*param_2 + 0x240));
        uVar8 = thunk_FUN_03fc39d4(&DAT_09187478);
        uVar8 = FUN_03f5c42c(uVar8,&local_44);
        uVar9 = thunk_FUN_03fc39d4(&DAT_09211f10);
        uVar7 = Newtonsoft_Json_Utilities_StringUtils__FormatWith(uVar9,uVar7,uVar8,0);
        goto LAB_077036bc;
      }
      uVar7 = (**(code **)(*param_2 + 0x248))(param_2,*(undefined8 *)(*param_2 + 0x250));
      if (*(int *)(DAT_09182ff8 + 0xe4) == 0) {
        FUN_03f5c424(DAT_09182ff8);
      }
      uVar8 = System_Globalization_CultureInfo__get_InvariantCulture(0);
      if (*(int *)(DAT_09182b88 + 0xe4) == 0) {
        FUN_03f5c424(DAT_09182b88);
      }
      uVar4 = System_Convert__ToByte(uVar7,uVar8,0);
      lVar2 = DAT_091ab728;
      if (lVar5 == 0) goto LAB_07703648;
      lVar10 = *(long *)(lVar5 + 0x10);
      *(int *)(lVar5 + 0x1c) = *(int *)(lVar5 + 0x1c) + 1;
      if (lVar10 == 0) goto LAB_07703648;
      uVar1 = *(uint *)(lVar5 + 0x18);
      if (uVar1 < *(uint *)(lVar10 + 0x18)) {
        *(uint *)(lVar5 + 0x18) = uVar1 + 1;
        *(char *)(lVar10 + (int)uVar1 + 0x20) = (char)uVar4;
      }
      else {
        FUN_057217ac(lVar5,uVar4,*(undefined8 *)(*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x70));
      }
    }
    uVar6 = (**(code **)(*param_2 + 0x288))(param_2,*(undefined8 *)(*param_2 + 0x290));
  } while( true );
}

