// rea decompile_all
// name: Utilities.ObjectPoolDictArray$$GetGameObjects
// address: 0x44ff46c
// body: available
// range: 0x44ff46c-0x44ffa5b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x44ffa58 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long Utilities_ObjectPoolDictArray__GetGameObjects
               (undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
               undefined4 param_5,undefined4 param_6,undefined4 param_7,long param_8,long param_9,
               int param_10,ulong param_11)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  ulong uVar5;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  long *plVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  
  if ((DAT_09518492 & 1) == 0) {
    FUN_03f5c2a4(&DAT_0919d208);
    FUN_03f5c2a4(&DAT_0919d210);
    FUN_03f5c2a4(&DAT_0919d220);
    FUN_03f5c2a4(&DAT_091adc88);
    FUN_03f5c2a4(&DAT_091acd50);
    FUN_03f5c2a4(&DAT_091adcb0);
    FUN_03f5c2a4(&DAT_091acd68);
    FUN_03f5c2a4(&DAT_091acd38);
    FUN_03f5c2a4(&DAT_091acd78);
    FUN_03f5c2a4(&DAT_091acd80);
    FUN_03f5c2a4(&DAT_091acd88);
    FUN_03f5c2a4(&DAT_091acd90);
    FUN_03f5c2a4(&DAT_0917c1f0);
    FUN_03f5c2a4(&DAT_091d4b10);
    FUN_03f5c2a4(&DAT_09188ad0);
    DAT_09518492 = 1;
  }
  if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar5 = UnityEngine_Object__op_Equality(param_9,0,0);
  if ((uVar5 & 1) != 0) {
    return 0;
  }
  if (param_9 == 0) goto LAB_044ffa58;
  uVar3 = UnityEngine_Object__GetInstanceID(param_9,0);
  if (*(long *)(param_8 + 0x20) == 0) goto LAB_044ffa58;
  uVar5 = FUN_05797528(*(long *)(param_8 + 0x20),uVar3,DAT_091adcb0);
  if ((uVar5 & 1) == 0) {
    if (*(long *)(param_8 + 0x28) == 0) goto LAB_044ffa58;
    uVar5 = FUN_06ef0700(*(long *)(param_8 + 0x28),uVar3,DAT_0919d210);
    lVar12 = DAT_091adc88;
    if ((uVar5 & 1) == 0) {
      lVar6 = *(long *)(param_8 + 0x20);
      if (lVar6 == 0) goto LAB_044ffa58;
      lVar10 = *(long *)(lVar6 + 0x10);
      *(int *)(lVar6 + 0x1c) = *(int *)(lVar6 + 0x1c) + 1;
      if (lVar10 == 0) goto LAB_044ffa58;
      uVar1 = *(uint *)(lVar6 + 0x18);
      if (uVar1 < *(uint *)(lVar10 + 0x18)) {
        *(uint *)(lVar6 + 0x18) = uVar1 + 1;
        *(undefined4 *)(lVar10 + (long)(int)uVar1 * 4 + 0x20) = uVar3;
      }
      else {
        FUN_057971a8(lVar6,uVar3,*(undefined8 *)(*(long *)(*(long *)(lVar12 + 0x20) + 0xc0) + 0x70))
        ;
      }
      lVar12 = *(long *)(param_8 + 0x28);
      uVar7 = thunk_FUN_03f9944c(DAT_0917c1f0);
      FUN_057e0400(uVar7,DAT_091acd38);
      if (lVar12 == 0) goto LAB_044ffa58;
      FUN_06ef050c(lVar12,uVar3,uVar7,DAT_0919d208);
    }
  }
  if (*(long *)(param_8 + 0x28) == 0) goto LAB_044ffa58;
  lVar12 = FUN_06ef046c(*(long *)(param_8 + 0x28),uVar3,DAT_0919d220);
  lVar6 = thunk_FUN_03f9944c(DAT_0917c1f0);
  FUN_057e0400(lVar6,DAT_091acd38);
  if ((param_11 & 1) == 0) {
    if (lVar12 == 0) goto LAB_044ffa58;
    iVar4 = *(int *)(lVar12 + 0x18);
    if (-1 < iVar4 + -1) {
      if (lVar6 == 0) goto LAB_044ffa58;
      do {
        if (param_10 <= *(int *)(lVar6 + 0x18)) break;
        iVar4 = iVar4 + -1;
        lVar10 = FUN_057e0998(lVar12,iVar4,DAT_091acd88);
        if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
          FUN_03f5c424(DAT_09188ad0);
        }
        uVar5 = UnityEngine_Object__op_Equality(lVar10,0,0);
        if ((uVar5 & 1) == 0) {
          if (lVar10 == 0) goto LAB_044ffa58;
          uVar5 = UnityEngine_GameObject__get_activeSelf(lVar10,0);
          if ((uVar5 & 1) == 0) {
            lVar8 = UnityEngine_GameObject__get_transform(lVar10,0);
            if (lVar8 == 0) goto LAB_044ffa58;
            UnityEngine_Transform__set_position(param_1,param_2,param_3,lVar8,0);
            UnityEngine_Transform__set_rotation(param_4,param_5,param_6,param_7,lVar8,0);
            UnityEngine_GameObject__SetActive(lVar10,1,0);
            lVar8 = DAT_091acd50;
            lVar11 = *(long *)(lVar6 + 0x10);
            *(int *)(lVar6 + 0x1c) = *(int *)(lVar6 + 0x1c) + 1;
            if (lVar11 == 0) goto LAB_044ffa58;
            uVar1 = *(uint *)(lVar6 + 0x18);
            if (uVar1 < *(uint *)(lVar11 + 0x18)) {
              *(uint *)(lVar6 + 0x18) = uVar1 + 1;
              plVar9 = (long *)(lVar11 + (long)(int)uVar1 * 8 + 0x20);
              *plVar9 = lVar10;
              thunk_FUN_03f5d7b8(plVar9,lVar10);
            }
            else {
              FUN_057e0c68(lVar6,lVar10,
                           *(undefined8 *)(*(long *)(*(long *)(lVar8 + 0x20) + 0xc0) + 0x70));
            }
          }
        }
        else {
          FUN_057e2274(lVar12,lVar10,DAT_091acd68);
        }
      } while (0 < iVar4);
      goto LAB_044ff85c;
    }
  }
  else {
LAB_044ff85c:
    if (lVar12 == 0) goto LAB_044ffa58;
  }
  iVar4 = FUN_057e07d0(lVar12,DAT_091acd78);
  if (lVar6 != 0) {
    iVar2 = (*(int *)(lVar12 + 0x18) + param_10) - *(int *)(lVar6 + 0x18);
    if (iVar4 <= iVar2) {
      iVar4 = iVar2;
    }
    FUN_057e07e8(lVar12,iVar4,DAT_091acd90);
    iVar4 = *(int *)(lVar6 + 0x18);
    while( true ) {
      if (param_10 <= iVar4) {
        return lVar6;
      }
      if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      lVar10 = FUN_04c350c8(param_9,DAT_091d4b10);
      if ((lVar10 == 0) || (lVar8 = UnityEngine_GameObject__get_transform(lVar10,0), lVar8 == 0))
      break;
      UnityEngine_Transform__set_position(param_1,param_2,param_3,lVar8,0);
      UnityEngine_Transform__set_rotation(param_4,param_5,param_6,param_7,lVar8,0);
      UnityEngine_GameObject__SetActive(lVar10,1,0);
      lVar8 = UnityEngine_GameObject__get_transform(lVar10,0);
      uVar7 = UnityEngine_Component__get_transform(param_8,0);
      if (lVar8 == 0) break;
      UnityEngine_Transform__SetParent(lVar8,uVar7,0);
      lVar8 = DAT_091acd50;
      lVar11 = *(long *)(lVar12 + 0x10);
      *(int *)(lVar12 + 0x1c) = *(int *)(lVar12 + 0x1c) + 1;
      if (lVar11 == 0) break;
      uVar1 = *(uint *)(lVar12 + 0x18);
      if (uVar1 < *(uint *)(lVar11 + 0x18)) {
        *(uint *)(lVar12 + 0x18) = uVar1 + 1;
        plVar9 = (long *)(lVar11 + (long)(int)uVar1 * 8 + 0x20);
        *plVar9 = lVar10;
        thunk_FUN_03f5d7b8(plVar9,lVar10);
      }
      else {
        FUN_057e0c68(lVar12,lVar10,*(undefined8 *)(*(long *)(*(long *)(lVar8 + 0x20) + 0xc0) + 0x70)
                    );
      }
      lVar8 = DAT_091acd50;
      lVar11 = *(long *)(lVar6 + 0x10);
      *(int *)(lVar6 + 0x1c) = *(int *)(lVar6 + 0x1c) + 1;
      if (lVar11 == 0) break;
      uVar1 = *(uint *)(lVar6 + 0x18);
      if (uVar1 < *(uint *)(lVar11 + 0x18)) {
        *(uint *)(lVar6 + 0x18) = uVar1 + 1;
        plVar9 = (long *)(lVar11 + (long)(int)uVar1 * 8 + 0x20);
        *plVar9 = lVar10;
        thunk_FUN_03f5d7b8(plVar9,lVar10);
      }
      else {
        FUN_057e0c68(lVar6,lVar10,*(undefined8 *)(*(long *)(*(long *)(lVar8 + 0x20) + 0xc0) + 0x70))
        ;
      }
      iVar4 = *(int *)(lVar6 + 0x18);
    }
  }
LAB_044ffa58:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

