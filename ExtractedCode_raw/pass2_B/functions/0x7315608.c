// rea decompile_all
// name: IapAdsSystem.IapAdsSystemInitializer$$SetupDefaultValues
// address: 0x7315608
// body: available
// range: 0x7315608-0x7315adf inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x7315ac0 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7315ac4 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7315ad0 to 0x3f5c8d0 FUN_03f5c8d0 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7315adc to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void IapAdsSystem_IapAdsSystemInitializer__SetupDefaultValues
               (long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  undefined4 uVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  long lVar6;
  undefined8 uVar7;
  ulong uVar8;
  long lVar9;
  ulong uVar10;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined4 local_68;
  
  if ((DAT_0952053a & 1) == 0) {
    FUN_03f5c2a4(&DAT_0919feb8);
    FUN_03f5c2a4(&DAT_09180318);
    FUN_03f5c2a4(&DAT_09189e88);
    FUN_03f5c2a4(&DAT_09180420);
    FUN_03f5c2a4(&DAT_09172a20);
    FUN_03f5c2a4(&DAT_09189ea8);
    FUN_03f5c2a4(&DAT_09211fc8);
    DAT_0952053a = 1;
  }
  uVar2 = DAT_09172a20;
  if (*(int *)(DAT_095354b8 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar2 = System_Type__GetTypeFromHandle(uVar2,0);
  if (*(int *)(DAT_09535470 + 0xe4) == 0) {
    FUN_03f5c424(DAT_09535470);
  }
  lVar3 = System_Enum__GetValues(uVar2,0);
  uVar2 = DAT_09180420;
  if (lVar3 == 0) {
LAB_07315ac0:
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  lVar4 = thunk_FUN_03f99350(lVar3,DAT_09180420);
  if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03f5c8d0(lVar3,uVar2);
  }
  if (0 < (int)*(ulong *)(lVar4 + 0x18)) {
    uVar10 = 0;
    uVar8 = *(ulong *)(lVar4 + 0x18) & 0xffffffff;
    do {
      if (uVar8 <= uVar10) {
LAB_07315ac4:
                    /* WARNING: Subroutine does not return */
        FUN_03f5c558();
      }
      uVar1 = *(undefined4 *)(lVar4 + 0x20 + uVar10 * 4);
      switch(uVar1) {
      case 0:
        local_78 = DAT_09189ea8;
        lVar3 = *param_4;
        local_68 = 0;
        uStack_70 = 0xffffffffffffffff;
        uVar2 = System_Enum__ToString(&local_78,0);
        if (lVar3 == 0) goto LAB_07315ac0;
        uVar7 = *(undefined8 *)(param_1 + 0x50);
        break;
      case 1:
        local_78 = DAT_09189ea8;
        lVar3 = *param_4;
        uStack_70 = 0xffffffffffffffff;
        local_68 = 1;
        uVar2 = System_Enum__ToString(&local_78,0);
        if (lVar3 == 0) goto LAB_07315ac0;
        uVar7 = *(undefined8 *)(param_1 + 0x58);
        break;
      case 2:
        local_78 = DAT_09189ea8;
        lVar3 = *param_4;
        uStack_70 = 0xffffffffffffffff;
        local_68 = 2;
        uVar2 = System_Enum__ToString(&local_78,0);
        if (lVar3 == 0) goto LAB_07315ac0;
        uVar7 = *(undefined8 *)(param_1 + 0x60);
        break;
      case 3:
        local_78 = DAT_09189ea8;
        lVar3 = *param_4;
        uStack_70 = 0xffffffffffffffff;
        local_68 = 3;
        uVar2 = System_Enum__ToString(&local_78,0);
        if (lVar3 == 0) goto LAB_07315ac0;
        uVar7 = *(undefined8 *)(param_1 + 0x68);
        break;
      case 4:
        local_78 = DAT_09189ea8;
        lVar3 = *param_4;
        uStack_70 = 0xffffffffffffffff;
        local_68 = 4;
        uVar2 = System_Enum__ToString(&local_78,0);
        if (lVar3 == 0) goto LAB_07315ac0;
        uVar7 = *(undefined8 *)(param_1 + 0x70);
        break;
      case 5:
        local_78 = DAT_09189ea8;
        lVar3 = *param_4;
        uStack_70 = 0xffffffffffffffff;
        local_68 = 5;
        uVar2 = System_Enum__ToString(&local_78,0);
        if (lVar3 == 0) goto LAB_07315ac0;
        uVar7 = *(undefined8 *)(param_1 + 0x78);
        break;
      case 6:
        local_78 = DAT_09189ea8;
        lVar3 = *param_4;
        uStack_70 = 0xffffffffffffffff;
        local_68 = 6;
        uVar2 = System_Enum__ToString(&local_78,0);
        if (lVar3 == 0) goto LAB_07315ac0;
        uVar7 = *(undefined8 *)(param_1 + 0x80);
        break;
      case 7:
        local_78 = DAT_09189ea8;
        lVar3 = *param_4;
        uStack_70 = 0xffffffffffffffff;
        local_68 = 7;
        uVar2 = System_Enum__ToString(&local_78,0);
        if (lVar3 == 0) goto LAB_07315ac0;
        uVar7 = *(undefined8 *)(param_1 + 0x88);
        break;
      case 8:
        local_78 = DAT_09189ea8;
        lVar3 = *param_4;
        uStack_70 = 0xffffffffffffffff;
        local_68 = 8;
        uVar2 = System_Enum__ToString(&local_78,0);
        if (lVar3 == 0) goto LAB_07315ac0;
        uVar7 = *(undefined8 *)(param_1 + 0x90);
        break;
      case 9:
        local_78 = DAT_09189ea8;
        lVar3 = *param_4;
        uStack_70 = 0xffffffffffffffff;
        local_68 = 9;
        uVar2 = System_Enum__ToString(&local_78,0);
        if (lVar3 == 0) goto LAB_07315ac0;
        uVar7 = *(undefined8 *)(param_1 + 0x98);
        break;
      case 10:
        local_78 = DAT_09189ea8;
        lVar3 = *param_4;
        uStack_70 = 0xffffffffffffffff;
        local_68 = 10;
        uVar2 = System_Enum__ToString(&local_78,0);
        if (lVar3 == 0) goto LAB_07315ac0;
        uVar7 = *(undefined8 *)(param_1 + 0xa0);
        break;
      case 0xb:
        local_78 = DAT_09189ea8;
        lVar3 = *param_4;
        uStack_70 = 0xffffffffffffffff;
        local_68 = 0xb;
        uVar2 = System_Enum__ToString(&local_78,0);
        if (lVar3 == 0) goto LAB_07315ac0;
        uVar7 = *(undefined8 *)(param_1 + 0xa8);
        break;
      case 0xc:
        local_78 = DAT_09189ea8;
        lVar3 = *param_4;
        uStack_70 = 0xffffffffffffffff;
        local_68 = 0xc;
        uVar2 = System_Enum__ToString(&local_78,0);
        if (lVar3 == 0) goto LAB_07315ac0;
        uVar7 = *(undefined8 *)(param_1 + 0xb0);
        break;
      case 0xd:
        local_78 = DAT_09189ea8;
        lVar3 = *param_4;
        uStack_70 = 0xffffffffffffffff;
        local_68 = 0xd;
        uVar2 = System_Enum__ToString(&local_78,0);
        if (lVar3 == 0) goto LAB_07315ac0;
        uVar7 = *(undefined8 *)(param_1 + 0xb8);
        break;
      default:
        if (*(int *)(DAT_09189e88 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        lVar9 = **(long **)(DAT_09189e88 + 0xb8);
        plVar5 = (long *)FUN_03f5c394(DAT_09180318,1);
        local_78 = DAT_09189ea8;
        uStack_70 = 0xffffffffffffffff;
        local_68 = uVar1;
        lVar3 = System_Enum__ToString(&local_78,0);
        if (plVar5 != (long *)0x0) {
          if ((lVar3 != 0) &&
             (lVar6 = thunk_FUN_03f99350(lVar3,*(undefined8 *)(*plVar5 + 0x40)), lVar6 == 0)) {
            uVar2 = thunk_FUN_03fa6ef4();
                    /* WARNING: Subroutine does not return */
            FUN_03f5c414(uVar2,0);
          }
          if ((int)plVar5[3] == 0) goto LAB_07315ac4;
          plVar5[4] = lVar3;
          thunk_FUN_03f5d7b8(plVar5 + 4,lVar3);
          if (lVar9 != 0) {
            EssentialSystemR1_R1Logger__LogErrorFormat(lVar9,DAT_09211fc8,plVar5,0);
            goto LAB_073159dc;
          }
        }
        goto LAB_07315ac0;
      }
      FUN_06fd8454(lVar3,uVar2,uVar7,DAT_0919feb8);
LAB_073159dc:
      uVar8 = (ulong)*(uint *)(lVar4 + 0x18);
      uVar10 = uVar10 + 1;
    } while ((long)uVar10 < (long)(int)*(uint *)(lVar4 + 0x18));
  }
  return;
}

