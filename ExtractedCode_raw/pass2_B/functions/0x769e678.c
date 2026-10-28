// rea decompile_all
// name: Newtonsoft.Json.Utilities.ReflectionUtils$$GetDefaultValue
// address: 0x769e678
// body: available
// range: 0x769e678-0x769e89b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x769e894 to 0x75e1cf4 System.Activator$$CreateInstance (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x769e898 to 0x89db930 <EXTERNAL>::__stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void Newtonsoft_Json_Utilities_ReflectionUtils__GetDefaultValue(undefined8 param_1)

{
  long lVar1;
  undefined4 uVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  ulong *puVar6;
  long *plVar7;
  ulong local_50;
  ulong uStack_48;
  ulong local_40;
  ulong local_38;
  long local_28;
  
  puVar6 = &local_50;
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  if ((DAT_09522603 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09181b78);
    FUN_03f5c2a4(&DAT_09182b90);
    FUN_03f5c2a4(&DAT_09183590);
    FUN_03f5c2a4(&DAT_09183548);
    FUN_03f5c2a4(&DAT_091837d8);
    FUN_03f5c2a4(&DAT_09184f30);
    FUN_03f5c2a4(&DAT_09189d88);
    DAT_09522603 = 1;
  }
  uVar3 = Newtonsoft_Json_Utilities_TypeExtensions__IsValueType(param_1,0);
  uVar4 = 0;
  if ((uVar3 & 1) == 0) goto LAB_0769e850;
  if (*(int *)(DAT_09182b90 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar2 = Newtonsoft_Json_Utilities_ConvertUtils__GetTypeCode(param_1);
  switch(uVar2) {
  case 2:
  case 6:
  case 8:
  case 10:
  case 0xc:
  case 0xe:
  case 0x10:
    lVar5 = DAT_09535420;
    goto LAB_0769e764;
  default:
    if (*(int *)(DAT_09189d88 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar4 = Newtonsoft_Json_Utilities_ReflectionUtils__IsNullable(param_1);
    if ((uVar4 & 1) == 0) {
      if (*(long *)(lVar1 + 0x28) == local_28) {
        System_Activator__CreateInstance(param_1,0);
        return;
      }
      goto LAB_0769e898;
    }
    uVar4 = 0;
    goto LAB_0769e850;
  case 4:
    local_40 = local_40 & 0xffffffffffffff00;
    lVar5 = DAT_09535400;
    goto LAB_0769e848;
  case 0x12:
  case 0x14:
    lVar5 = DAT_09535440;
    break;
  case 0x16:
    lVar5 = DAT_09535450;
LAB_0769e764:
    local_40 = local_40 & 0xffffffff00000000;
    goto LAB_0769e848;
  case 0x18:
    lVar5 = DAT_09535458;
    break;
  case 0x1a:
    lVar5 = DAT_09183548;
    break;
  case 0x1c:
    plVar7 = &DAT_09183590;
    goto LAB_0769e81c;
  case 0x1e:
    if (*(int *)(DAT_091837d8 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uStack_48 = (*(ulong **)(DAT_091837d8 + 0xb8))[1];
    local_50 = **(ulong **)(DAT_091837d8 + 0xb8);
    lVar5 = DAT_091837d8;
    local_40 = local_50;
    local_38 = uStack_48;
    goto LAB_0769e84c;
  case 0x20:
    plVar7 = &DAT_09184f30;
    goto LAB_0769e81c;
  case 0x24:
    plVar7 = &DAT_09181b78;
LAB_0769e81c:
    local_38 = 0;
    lVar5 = *plVar7;
  }
  local_40 = 0;
LAB_0769e848:
  puVar6 = &local_40;
LAB_0769e84c:
  uVar4 = FUN_03f5c42c(lVar5,puVar6);
LAB_0769e850:
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
LAB_0769e898:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar4);
}

