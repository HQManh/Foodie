// rea decompile_all
// name: IapAdsSystem.UserAnalyticsState$$RecordIap
// address: 0x732b1c8
// body: available
// range: 0x732b1c8-0x732b44f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x732b448 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x732b44c to 0x89db930 <EXTERNAL>::__stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void IapAdsSystem_UserAnalyticsState__RecordIap
               (long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,long param_5)

{
  uint uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  ulong uVar5;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  undefined8 *puVar9;
  undefined1 auVar10 [16];
  undefined8 local_58;
  undefined8 uStack_50;
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  if ((DAT_095205fb & 1) == 0) {
    FUN_03f5c2a4(&DAT_091837d8);
    FUN_03f5c2a4(&DAT_0919f668);
    FUN_03f5c2a4(&DAT_0919f670);
    FUN_03f5c2a4(&DAT_091b0570);
    FUN_03f5c2a4(&DAT_091b0590);
    FUN_03f5c2a4(&DAT_091b05d8);
    FUN_03f5c2a4(&DAT_091b0608);
    FUN_03f5c2a4(&DAT_09224f00);
    DAT_095205fb = 1;
  }
  local_58 = 0;
  uStack_50 = 0;
  uVar5 = System_String__IsNullOrEmpty(param_2,0);
  if ((uVar5 & 1) == 0) {
    uVar5 = 0;
    if (*(long *)(param_1 + 0xa8) != 0) {
      uVar5 = FUN_057e1004(*(long *)(param_1 + 0xa8),param_2,DAT_091b0590);
      if ((uVar5 & 1) == 0) goto LAB_0732b2ac;
      uVar5 = 0;
LAB_0732b410:
      if (*(long *)(lVar2 + 0x28) == local_48) {
        return;
      }
      goto LAB_0732b44c;
    }
  }
  else {
LAB_0732b2ac:
    uVar5 = System_String__IsNullOrEmpty(param_2,0);
    lVar6 = DAT_091b0570;
    if ((uVar5 & 1) == 0) {
      uVar5 = *(ulong *)(param_1 + 0xa8);
      if (uVar5 != 0) {
        lVar8 = *(long *)(uVar5 + 0x10);
        *(int *)(uVar5 + 0x1c) = *(int *)(uVar5 + 0x1c) + 1;
        if (lVar8 != 0) {
          uVar1 = *(uint *)(uVar5 + 0x18);
          if (uVar1 < *(uint *)(lVar8 + 0x18)) {
            *(uint *)(uVar5 + 0x18) = uVar1 + 1;
            puVar9 = (undefined8 *)(lVar8 + (long)(int)uVar1 * 8 + 0x20);
            *puVar9 = param_2;
            thunk_FUN_03f5d7b8(puVar9,param_2);
          }
          else {
            FUN_057e0c68(uVar5,param_2,
                         *(undefined8 *)(*(long *)(*(long *)(lVar6 + 0x20) + 0xc0) + 0x70));
          }
          lVar6 = *(long *)(param_1 + 0xa8);
          uVar5 = 0;
          if (lVar6 != 0) {
            if (100 < *(int *)(lVar6 + 0x18)) {
              FUN_057e251c(lVar6,0,DAT_091b05d8);
            }
            goto LAB_0732b350;
          }
        }
      }
    }
    else {
LAB_0732b350:
      *(int *)(param_1 + 0x98) = *(int *)(param_1 + 0x98) + 1;
      uVar5 = System_String__IsNullOrEmpty(param_5,0);
      uVar7 = DAT_09224f00;
      if ((uVar5 & 1) == 0) {
        if (param_5 == 0) goto LAB_0732b438;
        uVar7 = System_String__ToUpperInvariant(param_5,0);
      }
      uVar5 = 0;
      if (*(long *)(param_1 + 0xa0) != 0) {
        FUN_06fc4e94(*(long *)(param_1 + 0xa0),uVar7,&local_58,DAT_0919f668);
        uVar4 = uStack_50;
        uVar3 = local_58;
        lVar6 = *(long *)(param_1 + 0xa0);
        if (*(int *)(DAT_091837d8 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        auVar10 = System_Decimal__op_Addition(uVar3,uVar4,param_3,param_4,0);
        uVar5 = auVar10._0_8_;
        if (lVar6 != 0) {
          FUN_06fc3390(lVar6,uVar7,uVar5,auVar10._8_8_,DAT_0919f670);
          uVar5 = 1;
          goto LAB_0732b410;
        }
      }
    }
  }
LAB_0732b438:
  if (*(long *)(lVar2 + 0x28) == local_48) {
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
LAB_0732b44c:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar5);
}

