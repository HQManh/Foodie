// rea decompile_all
// name: Newtonsoft.Json.JsonReader$$ReadAsDecimal
// address: 0x7645e7c
// body: available
// range: 0x7645e7c-0x76461fb inclusive
// range: 0x76462fc-0x76462ff inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x7646120 to 0x5c2d414 FUN_05c2d414 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x76461e0 to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x76461f8 to 0x3f5c8d0 FUN_03f5c8d0 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x76462fc to 0x89db930 <EXTERNAL>::__stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void Newtonsoft_Json_JsonReader__ReadAsDecimal(undefined8 *param_1,long *param_2)

{
  uint uVar1;
  long lVar2;
  uint uVar3;
  long *plVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined4 uVar10;
  undefined1 local_60 [16];
  undefined8 local_50;
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  if ((DAT_0952230b & 1) == 0) {
    FUN_03f5c2a4(&DAT_09181b78);
    FUN_03f5c2a4(&DAT_09182b88);
    FUN_03f5c2a4(&DAT_09182ff8);
    FUN_03f5c2a4(&DAT_091837d8);
    FUN_03f5c2a4(&DAT_091b6cb8);
    DAT_0952230b = 1;
  }
  uVar3 = Newtonsoft_Json_JsonReader__GetContentToken(param_2);
  if (0xe < uVar3) {
LAB_07646158:
    thunk_FUN_03fc39d4(&DAT_09182ff8);
    FUN_039afb80();
    uVar5 = System_Globalization_CultureInfo__get_InvariantCulture(0);
    local_60._0_4_ = uVar3;
    uVar8 = thunk_FUN_03fc39d4(&DAT_09187478);
    uVar8 = FUN_03f5c42c(uVar8,local_60);
    uVar9 = thunk_FUN_03fc39d4(&DAT_09201988);
    uVar5 = Newtonsoft_Json_Utilities_StringUtils__FormatWith(uVar9,uVar5,uVar8,0);
    uVar5 = Newtonsoft_Json_JsonReaderException__Create(param_2,uVar5);
    uVar8 = thunk_FUN_03fc39d4(&DAT_091d1928);
    if (*(long *)(lVar2 + 0x28) == local_48) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c414(uVar5,uVar8);
    }
    goto LAB_076462fc;
  }
  uVar1 = 1 << (ulong)(uVar3 & 0x1f);
  if ((uVar1 & 0x4801) != 0) {
    if (*(long *)(lVar2 + 0x28) == local_48) {
      *param_1 = 0;
      param_1[1] = 0;
      param_1[2] = 0;
      return;
    }
    goto LAB_076462fc;
  }
  if ((uVar1 & 0x180) == 0) {
    if (uVar3 != 9) goto LAB_07646158;
    plVar4 = (long *)(**(code **)(*param_2 + 0x248))(param_2,*(undefined8 *)(*param_2 + 0x250));
    if ((plVar4 != (long *)0x0) && (*plVar4 != DAT_09535468)) {
      if (*(long *)(lVar2 + 0x28) == local_48) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c8d0(plVar4);
      }
      goto LAB_076462fc;
    }
    Newtonsoft_Json_JsonReader__ReadDecimalString(local_60,param_2,plVar4);
    param_1[1] = local_60._8_8_;
    *param_1 = local_60._0_8_;
    param_1[2] = local_50;
  }
  else {
    plVar4 = (long *)(**(code **)(*param_2 + 0x248))(param_2,*(undefined8 *)(*param_2 + 0x250));
    if (plVar4 == (long *)0x0) {
LAB_07645f6c:
      if (*(int *)(DAT_09182ff8 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      uVar5 = System_Globalization_CultureInfo__get_InvariantCulture(0);
      if (*(int *)(DAT_09182b88 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      local_60 = System_Convert__ToDecimal(plVar4,uVar5,0);
    }
    else {
      if (*plVar4 == DAT_091837d8) {
        puVar7 = (undefined8 *)thunk_FUN_03f99594(plVar4);
        uVar5 = *puVar7;
        uVar8 = puVar7[1];
        param_1[1] = 0;
        param_1[2] = 0;
        *param_1 = 0;
        if (*(long *)(lVar2 + 0x28) == local_48) {
          FUN_05c2d414(param_1,uVar5,uVar8,DAT_091b6cb8);
          return;
        }
        goto LAB_076462fc;
      }
      if (*plVar4 != DAT_09181b78) goto LAB_07645f6c;
      puVar7 = (undefined8 *)thunk_FUN_03f99594(plVar4);
      uVar5 = *puVar7;
      uVar8 = puVar7[1];
      if (*(int *)(DAT_09181b78 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      local_60 = System_Numerics_BigInteger__op_Explicit(uVar5,uVar8,0);
    }
    uVar8 = local_60._8_8_;
    uVar5 = local_60._0_8_;
    lVar6 = FUN_03f5c42c(DAT_091837d8,local_60);
    uVar10 = 8;
    param_2[3] = lVar6;
    *(undefined4 *)(param_2 + 2) = 8;
    thunk_FUN_03f5d7b8(param_2 + 3,lVar6);
    if (((int)param_2[5] == 0) && (uVar10 = 0xc, *(char *)((long)param_2 + 0x71) != '\0')) {
      uVar10 = 8;
    }
    *(undefined4 *)((long)param_2 + 0x24) = uVar10;
    param_1[1] = 0;
    param_1[2] = 0;
    uVar9 = DAT_091b6cb8;
    *param_1 = 0;
    FUN_05c2d414(param_1,uVar5,uVar8,uVar9);
  }
  if (*(long *)(lVar2 + 0x28) == local_48) {
    return;
  }
LAB_076462fc:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

