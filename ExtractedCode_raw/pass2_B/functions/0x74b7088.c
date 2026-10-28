// rea decompile_all
// name: System.Runtime.Serialization.Formatters.Binary.__BinaryWriter$$WriteValue
// address: 0x74b7088
// body: available
// range: 0x74b7088-0x74b77eb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x74b71b4 to 0x74bd93c System.Runtime.Serialization.Formatters.Binary.__BinaryWriter$$WriteDateTime (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x74b72dc to 0x74bd8c4 System.Runtime.Serialization.Formatters.Binary.__BinaryWriter$$WriteTimeSpan (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x74b76ac to 0x74bd72c System.Runtime.Serialization.Formatters.Binary.__BinaryWriter$$WriteDecimal (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x74b772c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x74b7734 to 0x3f5c8d0 FUN_03f5c8d0 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x74b77e8 to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void System_Runtime_Serialization_Formatters_Binary___BinaryWriter__WriteValue
               (long param_1,undefined4 param_2,long *param_3)

{
  uint uVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  code *UNRECOVERED_JUMPTABLE_00;
  long *plVar5;
  undefined1 auVar6 [16];
  undefined4 local_24;
  
  if ((DAT_09521480 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09182b88);
    FUN_03f5c2a4(&DAT_09182ff8);
    FUN_03f5c2a4(&DAT_09183548);
    FUN_03f5c2a4(&DAT_0918bd60);
    DAT_09521480 = 1;
  }
  switch(param_2) {
  case 1:
    if (*(int *)(DAT_09182ff8 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar3 = System_Globalization_CultureInfo__get_InvariantCulture(0);
    if (*(int *)(DAT_09182b88 + 0xe4) == 0) {
      FUN_03f5c424(DAT_09182b88);
    }
    uVar1 = System_Convert__ToBoolean(param_3,uVar3,0);
    plVar5 = *(long **)(param_1 + 0x30);
    if (plVar5 == (long *)0x0) break;
    uVar1 = uVar1 & 1;
    UNRECOVERED_JUMPTABLE_00 = *(code **)(*plVar5 + 0x1d8);
    uVar3 = *(undefined8 *)(*plVar5 + 0x1e0);
    goto LAB_074b7718;
  case 2:
    if (*(int *)(DAT_09182ff8 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar3 = System_Globalization_CultureInfo__get_InvariantCulture(0);
    if (*(int *)(DAT_09182b88 + 0xe4) == 0) {
      FUN_03f5c424(DAT_09182b88);
    }
    uVar1 = System_Convert__ToByte(param_3,uVar3,0);
    goto LAB_074b74d0;
  case 3:
    if (*(int *)(DAT_09182ff8 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar3 = System_Globalization_CultureInfo__get_InvariantCulture(0);
    if (*(int *)(DAT_09182b88 + 0xe4) == 0) {
      FUN_03f5c424(DAT_09182b88);
    }
    uVar1 = System_Convert__ToChar(param_3,uVar3,0);
    plVar5 = *(long **)(param_1 + 0x30);
    if (plVar5 != (long *)0x0) {
      uVar3 = *(undefined8 *)(*plVar5 + 0x230);
      UNRECOVERED_JUMPTABLE_00 = *(code **)(*plVar5 + 0x228);
      goto LAB_074b7718;
    }
    break;
  default:
    uVar3 = thunk_FUN_03fc39d4(&DAT_09180318);
    uVar3 = FUN_03f5c394(uVar3,1);
    local_24 = param_2;
    uVar4 = thunk_FUN_03fc39d4(&DAT_09187008);
    uVar4 = FUN_03f5c42c(uVar4,&local_24);
    uVar4 = System_Enum__ToString(uVar4,0);
    FUN_039b1d98(uVar3);
    FUN_039b0da0(uVar3,uVar4);
    FUN_039af17c(uVar3,0,uVar4);
    uVar4 = thunk_FUN_03fc39d4(&DAT_09205b40);
    uVar3 = System_Environment__GetResourceString(uVar4,uVar3,0);
    thunk_FUN_03fc39d4(&DAT_0918a948);
    uVar4 = thunk_FUN_03f9944c();
    System_Runtime_Serialization_SerializationException___ctor(uVar4,uVar3,0);
    uVar3 = thunk_FUN_03fc39d4(&DAT_091e0e80);
                    /* WARNING: Subroutine does not return */
    FUN_03f5c414(uVar4,uVar3);
  case 5:
    if (*(int *)(DAT_09182ff8 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar3 = System_Globalization_CultureInfo__get_InvariantCulture(0);
    if (*(int *)(DAT_09182b88 + 0xe4) == 0) {
      FUN_03f5c424(DAT_09182b88);
    }
    auVar6 = System_Convert__ToDecimal(param_3,uVar3,0);
    System_Runtime_Serialization_Formatters_Binary___BinaryWriter__WriteDecimal
              (param_1,auVar6._0_8_,auVar6._8_8_);
    return;
  case 6:
    if (*(int *)(DAT_09182ff8 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar3 = System_Globalization_CultureInfo__get_InvariantCulture(0);
    if (*(int *)(DAT_09182b88 + 0xe4) == 0) {
      FUN_03f5c424(DAT_09182b88);
    }
    System_Convert__ToDouble(param_3,uVar3,0);
    plVar5 = *(long **)(param_1 + 0x30);
    if (plVar5 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x074b747c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar5 + 0x248))(plVar5,*(undefined8 *)(*plVar5 + 0x250));
      return;
    }
    break;
  case 7:
    if (*(int *)(DAT_09182ff8 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar3 = System_Globalization_CultureInfo__get_InvariantCulture(0);
    if (*(int *)(DAT_09182b88 + 0xe4) == 0) {
      FUN_03f5c424(DAT_09182b88);
    }
    uVar1 = System_Convert__ToInt16(param_3,uVar3,0);
    plVar5 = *(long **)(param_1 + 0x30);
    if (plVar5 != (long *)0x0) {
      uVar3 = *(undefined8 *)(*plVar5 + 0x260);
      UNRECOVERED_JUMPTABLE_00 = *(code **)(*plVar5 + 600);
      goto LAB_074b7718;
    }
    break;
  case 8:
    if (*(int *)(DAT_09182ff8 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar3 = System_Globalization_CultureInfo__get_InvariantCulture(0);
    if (*(int *)(DAT_09182b88 + 0xe4) == 0) {
      FUN_03f5c424(DAT_09182b88);
    }
    uVar1 = System_Convert__ToInt32(param_3,uVar3,0);
    plVar5 = *(long **)(param_1 + 0x30);
    if (plVar5 != (long *)0x0) {
      uVar3 = *(undefined8 *)(*plVar5 + 0x280);
      UNRECOVERED_JUMPTABLE_00 = *(code **)(*plVar5 + 0x278);
      goto LAB_074b7718;
    }
    break;
  case 9:
    if (*(int *)(DAT_09182ff8 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar3 = System_Globalization_CultureInfo__get_InvariantCulture(0);
    if (*(int *)(DAT_09182b88 + 0xe4) == 0) {
      FUN_03f5c424(DAT_09182b88);
    }
    uVar3 = System_Convert__ToInt64(param_3,uVar3,0);
    plVar5 = *(long **)(param_1 + 0x30);
    if (plVar5 != (long *)0x0) {
      uVar4 = *(undefined8 *)(*plVar5 + 0x2a0);
      UNRECOVERED_JUMPTABLE_00 = *(code **)(*plVar5 + 0x298);
LAB_074b7628:
                    /* WARNING: Could not recover jumptable at 0x074b7638. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*UNRECOVERED_JUMPTABLE_00)(plVar5,uVar3,uVar4);
      return;
    }
    break;
  case 10:
    if (*(int *)(DAT_09182ff8 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar3 = System_Globalization_CultureInfo__get_InvariantCulture(0);
    if (*(int *)(DAT_09182b88 + 0xe4) == 0) {
      FUN_03f5c424(DAT_09182b88);
    }
    uVar1 = System_Convert__ToSByte(param_3,uVar3,0);
LAB_074b74d0:
    plVar5 = *(long **)(param_1 + 0x30);
    if (plVar5 != (long *)0x0) {
      UNRECOVERED_JUMPTABLE_00 = *(code **)(*plVar5 + 0x1e8);
      uVar3 = *(undefined8 *)(*plVar5 + 0x1f0);
LAB_074b7718:
                    /* WARNING: Could not recover jumptable at 0x074b7728. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*UNRECOVERED_JUMPTABLE_00)(plVar5,uVar1,uVar3);
      return;
    }
    break;
  case 0xb:
    if (*(int *)(DAT_09182ff8 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar3 = System_Globalization_CultureInfo__get_InvariantCulture(0);
    if (*(int *)(DAT_09182b88 + 0xe4) == 0) {
      FUN_03f5c424(DAT_09182b88);
    }
    System_Convert__ToSingle(param_3,uVar3,0);
    plVar5 = *(long **)(param_1 + 0x30);
    if (plVar5 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x074b7228. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar5 + 0x2b8))(plVar5,*(undefined8 *)(*plVar5 + 0x2c0));
      return;
    }
    break;
  case 0xc:
    if (param_3 != (long *)0x0) {
      if (*(long *)(*param_3 + 0x40) == *(long *)(DAT_0918bd60 + 0x40)) {
        puVar2 = (undefined8 *)thunk_FUN_03f99594(param_3);
        System_Runtime_Serialization_Formatters_Binary___BinaryWriter__WriteTimeSpan
                  (param_1,*puVar2);
        return;
      }
LAB_074b7730:
                    /* WARNING: Subroutine does not return */
      FUN_03f5c8d0(param_3);
    }
    break;
  case 0xd:
    if (param_3 != (long *)0x0) {
      if (*(long *)(*param_3 + 0x40) == *(long *)(DAT_09183548 + 0x40)) {
        puVar2 = (undefined8 *)thunk_FUN_03f99594(param_3);
        System_Runtime_Serialization_Formatters_Binary___BinaryWriter__WriteDateTime
                  (param_1,*puVar2);
        return;
      }
      goto LAB_074b7730;
    }
    break;
  case 0xe:
    if (*(int *)(DAT_09182ff8 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar3 = System_Globalization_CultureInfo__get_InvariantCulture(0);
    if (*(int *)(DAT_09182b88 + 0xe4) == 0) {
      FUN_03f5c424(DAT_09182b88);
    }
    uVar1 = System_Convert__ToUInt16(param_3,uVar3,0);
    plVar5 = *(long **)(param_1 + 0x30);
    if (plVar5 != (long *)0x0) {
      uVar3 = *(undefined8 *)(*plVar5 + 0x270);
      UNRECOVERED_JUMPTABLE_00 = *(code **)(*plVar5 + 0x268);
      goto LAB_074b7718;
    }
    break;
  case 0xf:
    if (*(int *)(DAT_09182ff8 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar3 = System_Globalization_CultureInfo__get_InvariantCulture(0);
    if (*(int *)(DAT_09182b88 + 0xe4) == 0) {
      FUN_03f5c424(DAT_09182b88);
    }
    uVar1 = System_Convert__ToUInt32(param_3,uVar3,0);
    plVar5 = *(long **)(param_1 + 0x30);
    if (plVar5 != (long *)0x0) {
      uVar3 = *(undefined8 *)(*plVar5 + 0x290);
      UNRECOVERED_JUMPTABLE_00 = *(code **)(*plVar5 + 0x288);
      goto LAB_074b7718;
    }
    break;
  case 0x10:
    if (*(int *)(DAT_09182ff8 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar3 = System_Globalization_CultureInfo__get_InvariantCulture(0);
    if (*(int *)(DAT_09182b88 + 0xe4) == 0) {
      FUN_03f5c424(DAT_09182b88);
    }
    uVar3 = System_Convert__ToUInt64(param_3,uVar3,0);
    plVar5 = *(long **)(param_1 + 0x30);
    if (plVar5 != (long *)0x0) {
      uVar4 = *(undefined8 *)(*plVar5 + 0x2b0);
      UNRECOVERED_JUMPTABLE_00 = *(code **)(*plVar5 + 0x2a8);
      goto LAB_074b7628;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

