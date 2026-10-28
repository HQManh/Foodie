// rea decompile_all
// name: MessagePack.MessagePackSerializer$$WriteJsonString
// address: 0x73951e0
// body: available
// range: 0x73951e0-0x73953f3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x73953f0 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void MessagePack_MessagePackSerializer__WriteJsonString(long param_1,long *param_2)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  undefined8 uVar4;
  long lVar5;
  int iVar6;
  
  if ((DAT_09520aec & 1) == 0) {
    FUN_03f5c2a4(&DAT_091d3658);
    FUN_03f5c2a4(&DAT_09214678);
    FUN_03f5c2a4(&DAT_09214690);
    FUN_03f5c2a4(&DAT_092146d0);
    FUN_03f5c2a4(&DAT_092145e8);
    FUN_03f5c2a4(&DAT_09214688);
    FUN_03f5c2a4(&DAT_092146b8);
    FUN_03f5c2a4(&DAT_09214658);
    DAT_09520aec = 1;
  }
  if (param_2 != (long *)0x0) {
    (**(code **)(*param_2 + 0x228))(param_2,0x22,*(undefined8 *)(*param_2 + 0x230));
    if (param_1 != 0) {
      iVar2 = *(int *)(param_1 + 0x10);
      if (0 < iVar2) {
        iVar6 = 0;
        do {
          uVar3 = System_String__get_Chars(param_1,iVar6,0);
          uVar1 = uVar3 & 0xffff;
          if (uVar1 < 0xc) {
            if (uVar1 == 8) {
              lVar5 = *param_2;
              uVar4 = DAT_09214678;
            }
            else if (uVar1 == 9) {
              lVar5 = *param_2;
              uVar4 = DAT_092146d0;
            }
            else {
              if (uVar1 != 10) goto LAB_0739536c;
              lVar5 = *param_2;
              uVar4 = DAT_09214690;
            }
LAB_073953a4:
            (**(code **)(lVar5 + 0x278))(param_2,uVar4,*(undefined8 *)(lVar5 + 0x280));
          }
          else {
            if (0x21 < uVar1) {
              if (uVar1 == 0x5c) {
                lVar5 = *param_2;
                uVar4 = DAT_09214658;
              }
              else {
                if (uVar1 != 0x22) goto LAB_0739536c;
                lVar5 = *param_2;
                uVar4 = DAT_092145e8;
              }
              goto LAB_073953a4;
            }
            if (uVar1 == 0xc) {
              lVar5 = *param_2;
              uVar4 = DAT_09214688;
              goto LAB_073953a4;
            }
            if (uVar1 == 0xd) {
              lVar5 = *param_2;
              uVar4 = DAT_092146b8;
              goto LAB_073953a4;
            }
LAB_0739536c:
            (**(code **)(*param_2 + 0x228))(param_2,uVar3,*(undefined8 *)(*param_2 + 0x230));
          }
          iVar6 = iVar6 + 1;
        } while (iVar2 != iVar6);
      }
                    /* WARNING: Could not recover jumptable at 0x073953ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_2 + 0x228))(param_2,0x22,*(undefined8 *)(*param_2 + 0x230));
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

