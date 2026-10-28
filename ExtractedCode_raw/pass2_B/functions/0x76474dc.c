// rea decompile_all
// name: Newtonsoft.Json.JsonReader$$ReadForType
// address: 0x76474dc
// body: available
// range: 0x76474dc-0x76477fb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x7647608 to 0x7647830 Newtonsoft.Json.JsonReader$$MoveToContent (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x76477f4 to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x76477f8 to 0x89db930 <EXTERNAL>::__stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


ulong Newtonsoft_Json_JsonReader__ReadForType(long *param_1,long param_2,ulong param_3)

{
  int iVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  undefined8 uVar5;
  long *plVar6;
  long *plVar7;
  undefined8 uVar8;
  long lVar9;
  code *pcVar10;
  uint uVar11;
  undefined1 auVar12 [16];
  undefined1 auStack_50 [24];
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  if ((param_3 & 1) != 0) {
    uVar8 = *(undefined8 *)(*param_1 + 0x290);
    plVar7 = param_1;
    if (*(long *)(lVar2 + 0x28) == local_38) {
                    /* WARNING: Could not recover jumptable at 0x07647530. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar3 = (**(code **)(*param_1 + 0x288))(param_1);
      return uVar3;
    }
    goto LAB_076477f8;
  }
  if (param_2 == 0) {
LAB_076475cc:
    auVar12 = (**(code **)(*param_1 + 0x288))(param_1,*(undefined8 *)(*param_1 + 0x290));
    uVar8 = auVar12._8_8_;
    plVar7 = auVar12._0_8_;
    if (((ulong)plVar7 & 1) != 0) {
      if (*(long *)(lVar2 + 0x28) == local_38) {
        uVar3 = Newtonsoft_Json_JsonReader__MoveToContent(param_1);
        return uVar3;
      }
      goto LAB_076477f8;
    }
    uVar11 = 0;
  }
  else {
    iVar1 = *(int *)(param_2 + 0x20);
    if (iVar1 < 5) {
      if (iVar1 < 2) {
        if (iVar1 == 0) goto LAB_076475cc;
        if (iVar1 != 1) {
LAB_076477b4:
          thunk_FUN_03fc39d4(&DAT_09181558);
          plVar6 = (long *)thunk_FUN_03f9944c();
          auVar12 = System_ArgumentOutOfRangeException___ctor(plVar6,0);
          uVar8 = auVar12._8_8_;
          plVar7 = auVar12._0_8_;
          if (*(long *)(lVar2 + 0x28) == local_38) {
LAB_076477e0:
            uVar8 = thunk_FUN_03fc39d4(&DAT_091d1970);
                    /* WARNING: Subroutine does not return */
            FUN_03f5c414(plVar6,uVar8);
          }
          goto LAB_076477f8;
        }
        pcVar10 = *(code **)(*param_1 + 0x298);
        uVar8 = *(undefined8 *)(*param_1 + 0x2a0);
      }
      else {
        if (iVar1 == 2) {
          uVar3 = (**(code **)(*param_1 + 0x288))(param_1,*(undefined8 *)(*param_1 + 0x290));
          if ((uVar3 & 1) == 0) {
            uVar11 = 0;
          }
          else {
            uVar11 = Newtonsoft_Json_JsonReader__MoveToContent(param_1);
          }
          auVar12 = (**(code **)(*param_1 + 0x238))(param_1,*(undefined8 *)(*param_1 + 0x240));
          if (auVar12._0_4_ == 0xc) {
            lVar4 = thunk_FUN_03fc39d4(&DAT_09182ff8);
            if (*(int *)(lVar4 + 0xe4) == 0) {
              FUN_03f5c424();
            }
            uVar8 = System_Globalization_CultureInfo__get_InvariantCulture(0);
            uVar5 = thunk_FUN_03fc39d4(&DAT_091fba98);
            lVar4 = DAT_09535440;
            lVar9 = *(long *)(param_2 + 0x60);
            if (lVar9 == 0) {
              if (*(int *)(DAT_095354b8 + 0xe4) == 0) {
                FUN_03f5c424();
              }
              lVar9 = System_Type__GetTypeFromHandle(lVar4 + 0x20,0);
            }
            uVar8 = Newtonsoft_Json_Utilities_StringUtils__FormatWith(uVar5,uVar8,lVar9,0);
            auVar12 = Newtonsoft_Json_JsonReaderException__Create(param_1,uVar8);
            uVar8 = auVar12._8_8_;
            plVar7 = auVar12._0_8_;
            plVar6 = plVar7;
            if (*(long *)(lVar2 + 0x28) != local_38) goto LAB_076477f8;
            goto LAB_076477e0;
          }
          goto LAB_076476d0;
        }
        if (iVar1 == 3) {
          pcVar10 = *(code **)(*param_1 + 0x2b8);
          uVar8 = *(undefined8 *)(*param_1 + 0x2c0);
        }
        else {
          if (iVar1 != 4) goto LAB_076477b4;
          pcVar10 = *(code **)(*param_1 + 0x2a8);
          uVar8 = *(undefined8 *)(*param_1 + 0x2b0);
        }
      }
      (*pcVar10)(param_1,uVar8);
    }
    else if (iVar1 < 7) {
      if (iVar1 == 5) {
        pcVar10 = *(code **)(*param_1 + 0x2e8);
        uVar8 = *(undefined8 *)(*param_1 + 0x2f0);
        goto LAB_076476a8;
      }
      if (iVar1 != 6) goto LAB_076477b4;
      pcVar10 = *(code **)(*param_1 + 0x2f8);
      uVar8 = *(undefined8 *)(*param_1 + 0x300);
LAB_07647668:
      (*pcVar10)(param_1,uVar8);
    }
    else if (iVar1 == 7) {
      pcVar10 = *(code **)(*param_1 + 0x308);
      uVar8 = *(undefined8 *)(*param_1 + 0x310);
LAB_076476a8:
      (*pcVar10)(auStack_50,param_1,uVar8);
    }
    else {
      if (iVar1 == 8) {
        pcVar10 = *(code **)(*param_1 + 0x2c8);
        uVar8 = *(undefined8 *)(*param_1 + 0x2d0);
        goto LAB_07647668;
      }
      if (iVar1 != 9) goto LAB_076477b4;
      (**(code **)(*param_1 + 0x2d8))(param_1,*(undefined8 *)(*param_1 + 0x2e0));
    }
    auVar12 = (**(code **)(*param_1 + 0x238))(param_1,*(undefined8 *)(*param_1 + 0x240));
    uVar11 = (uint)(auVar12._0_4_ != 0);
  }
LAB_076476d0:
  uVar8 = auVar12._8_8_;
  plVar7 = auVar12._0_8_;
  if (*(long *)(lVar2 + 0x28) == local_38) {
    return (ulong)(uVar11 & 1);
  }
LAB_076477f8:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(plVar7,uVar8);
}

