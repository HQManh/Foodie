// rea decompile_all
// name: System.Runtime.Serialization.Formatters.Binary.__BinaryParser$$ReadValue
// address: 0x74ca67c
// body: available
// range: 0x74ca67c-0x74caa4f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x74ca984 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x74caa48 to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x74caa4c to 0x89db930 <EXTERNAL>::__stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void System_Runtime_Serialization_Formatters_Binary___BinaryParser__ReadValue
               (long param_1,undefined4 param_2)

{
  long lVar1;
  undefined1 uVar2;
  undefined2 uVar3;
  undefined4 uVar4;
  long *plVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  undefined1 local_48 [16];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  if ((DAT_095214ca & 1) == 0) {
    FUN_03f5c2a4(&DAT_09183548);
    FUN_03f5c2a4(&DAT_091837d8);
    FUN_03f5c2a4(&DAT_0918bd60);
    DAT_095214ca = 1;
  }
  switch(param_2) {
  case 1:
    plVar5 = *(long **)(param_1 + 0x68);
    if (plVar5 == (long *)0x0) goto LAB_074ca974;
    uVar2 = (**(code **)(*plVar5 + 0x1c8))(plVar5,*(undefined8 *)(*plVar5 + 0x1d0));
    local_48._0_8_ = CONCAT71(local_48._1_7_,uVar2) & 0xffffffffffffff01;
    uVar6 = DAT_09535400;
    break;
  case 2:
    plVar5 = *(long **)(param_1 + 0x68);
    if (plVar5 == (long *)0x0) goto LAB_074ca974;
    uVar2 = (**(code **)(*plVar5 + 0x1d8))(plVar5,*(undefined8 *)(*plVar5 + 0x1e0));
    uVar6 = DAT_095353f0;
LAB_074ca87c:
    local_48[0] = uVar2;
    break;
  case 3:
    plVar5 = *(long **)(param_1 + 0x68);
    if (plVar5 == (long *)0x0) goto LAB_074ca974;
    uVar3 = (**(code **)(*plVar5 + 0x1f8))(plVar5,*(undefined8 *)(*plVar5 + 0x200));
    uVar6 = DAT_09535460;
LAB_074ca8cc:
    local_48._0_2_ = uVar3;
    break;
  default:
    uVar6 = thunk_FUN_03fc39d4(&DAT_09180318);
    uVar6 = FUN_03f5c394(uVar6,1);
    local_48._0_4_ = param_2;
    uVar7 = thunk_FUN_03fc39d4(&DAT_09187008);
    uVar7 = FUN_03f5c42c(uVar7,local_48);
    uVar7 = System_Enum__ToString(uVar7,0);
    FUN_039b1d98(uVar6);
    FUN_039b0da0(uVar6,uVar7);
    FUN_039af17c(uVar6,0,uVar7);
    uVar7 = thunk_FUN_03fc39d4(&DAT_09205b40);
    uVar6 = System_Environment__GetResourceString(uVar7,uVar6,0);
    thunk_FUN_03fc39d4(&DAT_0918a948);
    uVar7 = thunk_FUN_03f9944c();
    System_Runtime_Serialization_SerializationException___ctor(uVar7,uVar6,0);
    uVar6 = thunk_FUN_03fc39d4(&DAT_091e0e70);
    if (*(long *)(lVar1 + 0x28) == local_38) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c414(uVar7,uVar6);
    }
    goto LAB_074caa4c;
  case 5:
    local_48 = System_Runtime_Serialization_Formatters_Binary___BinaryParser__ReadDecimal(param_1);
    uVar6 = DAT_091837d8;
    break;
  case 6:
    plVar5 = *(long **)(param_1 + 0x68);
    if (plVar5 == (long *)0x0) goto LAB_074ca974;
    uVar6 = (**(code **)(*plVar5 + 0x278))(plVar5,*(undefined8 *)(*plVar5 + 0x280));
    local_48._0_8_ = uVar6;
    uVar6 = DAT_09535458;
    break;
  case 7:
    plVar5 = *(long **)(param_1 + 0x68);
    if (plVar5 != (long *)0x0) {
      uVar3 = (**(code **)(*plVar5 + 0x208))(plVar5,*(undefined8 *)(*plVar5 + 0x210));
      uVar6 = DAT_09535410;
      goto LAB_074ca8cc;
    }
    goto LAB_074ca974;
  case 8:
    plVar5 = *(long **)(param_1 + 0x68);
    if (plVar5 == (long *)0x0) goto LAB_074ca974;
    uVar4 = (**(code **)(*plVar5 + 0x228))(plVar5,*(undefined8 *)(*plVar5 + 0x230));
    uVar6 = DAT_09535420;
LAB_074ca940:
    local_48._0_4_ = uVar4;
    break;
  case 9:
    plVar5 = *(long **)(param_1 + 0x68);
    if (plVar5 == (long *)0x0) goto LAB_074ca974;
    uVar6 = (**(code **)(*plVar5 + 0x248))(plVar5,*(undefined8 *)(*plVar5 + 0x250));
    local_48._0_8_ = uVar6;
    uVar6 = DAT_09535440;
    break;
  case 10:
    plVar5 = *(long **)(param_1 + 0x68);
    if (plVar5 != (long *)0x0) {
      uVar2 = (**(code **)(*plVar5 + 0x1d8))(plVar5,*(undefined8 *)(*plVar5 + 0x1e0));
      uVar6 = DAT_09535408;
      goto LAB_074ca87c;
    }
    goto LAB_074ca974;
  case 0xb:
    plVar5 = *(long **)(param_1 + 0x68);
    if (plVar5 == (long *)0x0) goto LAB_074ca974;
    uVar4 = (**(code **)(*plVar5 + 0x268))(plVar5,*(undefined8 *)(*plVar5 + 0x270));
    local_48._0_4_ = uVar4;
    uVar6 = DAT_09535450;
    break;
  case 0xc:
    plVar5 = *(long **)(param_1 + 0x68);
    if (plVar5 != (long *)0x0) {
      uVar6 = (**(code **)(*plVar5 + 0x248))(plVar5,*(undefined8 *)(*plVar5 + 0x250));
      puVar8 = &DAT_0918bd60;
      goto LAB_074ca7b0;
    }
    goto LAB_074ca974;
  case 0xd:
    uVar6 = System_Runtime_Serialization_Formatters_Binary___BinaryParser__ReadDateTime(param_1);
    puVar8 = &DAT_09183548;
LAB_074ca7b0:
    local_48._0_8_ = uVar6;
    uVar6 = *puVar8;
    break;
  case 0xe:
    plVar5 = *(long **)(param_1 + 0x68);
    if (plVar5 != (long *)0x0) {
      uVar3 = (**(code **)(*plVar5 + 0x218))(plVar5,*(undefined8 *)(*plVar5 + 0x220));
      uVar6 = DAT_09535418;
      goto LAB_074ca8cc;
    }
    goto LAB_074ca974;
  case 0xf:
    plVar5 = *(long **)(param_1 + 0x68);
    if (plVar5 != (long *)0x0) {
      uVar4 = (**(code **)(*plVar5 + 0x238))(plVar5,*(undefined8 *)(*plVar5 + 0x240));
      uVar6 = DAT_09535428;
      goto LAB_074ca940;
    }
LAB_074ca974:
    if (*(long *)(lVar1 + 0x28) == local_38) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    goto LAB_074caa4c;
  case 0x10:
    plVar5 = *(long **)(param_1 + 0x68);
    if (plVar5 == (long *)0x0) goto LAB_074ca974;
    uVar6 = (**(code **)(*plVar5 + 600))(plVar5,*(undefined8 *)(*plVar5 + 0x260));
    local_48._0_8_ = uVar6;
    uVar6 = DAT_09535448;
  }
  FUN_03f5c42c(uVar6,local_48);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
LAB_074caa4c:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

