// rea decompile_all
// name: Newtonsoft.Json.Utilities.ConvertUtils$$FromBigInteger
// address: 0x7688cc4
// body: available
// range: 0x7688cc4-0x7689007 inclusive
// range: 0x7689148-0x768914b inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x7689148 to 0x89db930 <EXTERNAL>::__stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void Newtonsoft_Json_Utilities_ConvertUtils__FromBigInteger
               (undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 uVar2;
  undefined8 uVar3;
  ulong uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined1 local_58 [16];
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  if ((DAT_09522565 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09181b78);
    FUN_03f5c2a4(&DAT_09182b88);
    FUN_03f5c2a4(&DAT_09182ff8);
    FUN_03f5c2a4(&DAT_09171520);
    FUN_03f5c2a4(&DAT_091837d8);
    DAT_09522565 = 1;
  }
  uVar3 = DAT_09171520;
  if (*(int *)(DAT_095354b8 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar3 = System_Type__GetTypeFromHandle(uVar3,0);
  uVar4 = System_Type__op_Equality(param_3,uVar3,0);
  lVar5 = DAT_09535458;
  if ((uVar4 & 1) == 0) {
    if (*(int *)(DAT_095354b8 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar3 = System_Type__GetTypeFromHandle(lVar5 + 0x20,0);
    uVar4 = System_Type__op_Equality(param_3,uVar3,0);
    lVar5 = DAT_09535450;
    if ((uVar4 & 1) == 0) {
      if (*(int *)(DAT_095354b8 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      uVar3 = System_Type__GetTypeFromHandle(lVar5 + 0x20,0);
      uVar4 = System_Type__op_Equality(param_3,uVar3,0);
      lVar5 = DAT_09535448;
      if ((uVar4 & 1) == 0) {
        if (*(int *)(DAT_095354b8 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        uVar3 = System_Type__GetTypeFromHandle(lVar5 + 0x20,0);
        uVar4 = System_Type__op_Equality(param_3,uVar3,0);
        lVar5 = DAT_09535400;
        if ((uVar4 & 1) == 0) {
          if (*(int *)(DAT_095354b8 + 0xe4) == 0) {
            FUN_03f5c424();
          }
          uVar3 = System_Type__GetTypeFromHandle(lVar5 + 0x20,0);
          uVar4 = System_Type__op_Equality(param_3,uVar3,0);
          if ((uVar4 & 1) == 0) {
            if (*(int *)(DAT_09181b78 + 0xe4) == 0) {
              FUN_03f5c424();
            }
            local_58._0_8_ = System_Numerics_BigInteger__op_Explicit(param_1,param_2,0);
            uVar3 = FUN_03f5c42c(DAT_09535440,local_58);
            if (*(int *)(DAT_09182ff8 + 0xe4) == 0) {
              FUN_03f5c424();
            }
            uVar6 = System_Globalization_CultureInfo__get_InvariantCulture(0);
            if (*(int *)(DAT_09182b88 + 0xe4) == 0) {
              FUN_03f5c424();
            }
            System_Convert__ChangeType(uVar3,param_3,uVar6,0);
            goto LAB_07688e90;
          }
          if (*(int *)(DAT_09181b78 + 0xe4) == 0) {
            FUN_03f5c424();
          }
          uVar2 = System_Numerics_BigInteger__op_Inequality(param_1,param_2,0,0);
          local_58._0_8_ = CONCAT71(local_58._1_7_,uVar2) & 0xffffffffffffff01;
          lVar5 = DAT_09535400;
        }
        else {
          if (*(int *)(DAT_09181b78 + 0xe4) == 0) {
            FUN_03f5c424();
          }
          uVar3 = System_Numerics_BigInteger__op_Explicit(param_1,param_2,0);
          local_58._0_8_ = uVar3;
          lVar5 = DAT_09535448;
        }
      }
      else {
        if (*(int *)(DAT_09181b78 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        local_58._0_4_ = System_Numerics_BigInteger__op_Explicit(param_1,param_2,0);
        lVar5 = DAT_09535450;
      }
    }
    else {
      if (*(int *)(DAT_09181b78 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      uVar3 = System_Numerics_BigInteger__op_Explicit(param_1,param_2,0);
      local_58._0_8_ = uVar3;
      lVar5 = DAT_09535458;
    }
  }
  else {
    if (*(int *)(DAT_09181b78 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    local_58 = System_Numerics_BigInteger__op_Explicit(param_1,param_2,0);
    lVar5 = DAT_091837d8;
  }
  FUN_03f5c42c(lVar5,local_58);
LAB_07688e90:
  if (*(long *)(lVar1 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

