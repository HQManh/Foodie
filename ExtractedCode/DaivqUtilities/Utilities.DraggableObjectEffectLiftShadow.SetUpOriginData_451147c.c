// rea decompile_all
// name: Utilities.DraggableObjectEffectLiftShadow$$SetUpOriginData
// address: 0x451147c
// body: available
// range: 0x451147c-0x4511783 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x4511780 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void Utilities_DraggableObjectEffectLiftShadow__SetUpOriginData
               (undefined1 param_1 [16],undefined4 param_2,undefined4 param_3,long param_4)

{
  long lVar1;
  undefined8 uVar2;
  ulong uVar3;
  undefined4 *puVar4;
  long lVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  
  if ((DAT_09518539 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091c5348);
    FUN_03f5c2a4(&DAT_091c87e8);
    FUN_03f5c2a4(&DAT_091c87f0);
    FUN_03f5c2a4(&DAT_09188ad0);
    FUN_03f5c2a4(&DAT_0918c678);
    DAT_09518539 = 1;
  }
  uVar2 = DAT_091c5348;
  *(undefined1 *)(param_4 + 0xb0) = 1;
  lVar1 = FUN_04a6a14c(param_4,uVar2);
  if (lVar1 != 0) {
    lVar5 = *(long *)(lVar1 + 0x38);
    uVar2 = thunk_FUN_03f9944c(DAT_0918c678);
    UnityEngine_Events_UnityAction___ctor(uVar2,param_4,DAT_091c87f0,0);
    if (lVar5 != 0) {
      UnityEngine_Events_UnityEvent__AddListener(lVar5,uVar2,0);
      lVar1 = *(long *)(lVar1 + 0x48);
      uVar2 = thunk_FUN_03f9944c(DAT_0918c678);
      UnityEngine_Events_UnityAction___ctor(uVar2,param_4,DAT_091c87e8,0);
      if (lVar1 != 0) {
        UnityEngine_Events_UnityEvent__AddListener(lVar1,uVar2,0);
        uVar2 = *(undefined8 *)(param_4 + 0x28);
        if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        uVar3 = UnityEngine_Object__op_Implicit(uVar2,0);
        if ((uVar3 & 1) == 0) {
          if (DAT_09515ce6 == '\0') {
            FUN_03f5c2a4(&DAT_0918cbd0);
            DAT_09515ce6 = '\x01';
          }
          puVar4 = *(undefined4 **)(DAT_0918cbd0 + 0xb8);
          uVar6 = *puVar4;
          param_2 = puVar4[1];
          param_3 = puVar4[2];
        }
        else {
          if (*(long *)(param_4 + 0x28) == 0) goto LAB_04511780;
          uVar6 = UnityEngine_Transform__get_localPosition(*(long *)(param_4 + 0x28),0);
        }
        lVar1 = DAT_09188ad0;
        *(undefined4 *)(param_4 + 0x58) = uVar6;
        *(undefined4 *)(param_4 + 0x5c) = param_2;
        uVar2 = *(undefined8 *)(param_4 + 0x38);
        *(undefined4 *)(param_4 + 0x60) = param_3;
        if (*(int *)(lVar1 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        uVar3 = UnityEngine_Object__op_Implicit(uVar2,0);
        uVar6 = 0;
        if ((uVar3 & 1) != 0) {
          if (*(long *)(param_4 + 0x38) == 0) goto LAB_04511780;
          uVar6 = 0;
          UnityEngine_Transform__get_eulerAngles(*(long *)(param_4 + 0x38),0);
        }
        lVar1 = DAT_09188ad0;
        uVar2 = *(undefined8 *)(param_4 + 0x30);
        *(undefined4 *)(param_4 + 100) = uVar6;
        if (*(int *)(lVar1 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        uVar3 = UnityEngine_Object__op_Implicit(uVar2,0);
        if ((uVar3 & 1) == 0) {
          if (DAT_09515cf3 == '\0') {
            FUN_03f5c2a4(&DAT_0918cbd0);
            DAT_09515cf3 = '\x01';
          }
          lVar1 = *(long *)(DAT_0918cbd0 + 0xb8);
          uVar7 = *(undefined4 *)(lVar1 + 0xc);
          param_2 = *(undefined4 *)(lVar1 + 0x10);
          uVar6 = *(undefined4 *)(lVar1 + 0x14);
        }
        else {
          if (*(long *)(param_4 + 0x30) == 0) goto LAB_04511780;
          uVar7 = UnityEngine_Transform__get_localScale(*(long *)(param_4 + 0x30),0);
        }
        lVar1 = DAT_09188ad0;
        *(undefined4 *)(param_4 + 0x68) = uVar7;
        *(undefined4 *)(param_4 + 0x6c) = param_2;
        uVar2 = *(undefined8 *)(param_4 + 0x48);
        *(undefined4 *)(param_4 + 0x70) = uVar6;
        if (*(int *)(lVar1 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        uVar3 = UnityEngine_Object__op_Implicit(uVar2,0);
        if ((uVar3 & 1) == 0) {
          if (DAT_09515cf3 == '\0') {
            FUN_03f5c2a4(&DAT_0918cbd0);
            DAT_09515cf3 = '\x01';
          }
          lVar1 = *(long *)(DAT_0918cbd0 + 0xb8);
          uVar7 = *(undefined4 *)(lVar1 + 0xc);
          param_2 = *(undefined4 *)(lVar1 + 0x10);
          uVar6 = *(undefined4 *)(lVar1 + 0x14);
        }
        else {
          if (*(long *)(param_4 + 0x48) == 0) goto LAB_04511780;
          uVar7 = UnityEngine_Transform__get_localScale(*(long *)(param_4 + 0x48),0);
        }
        lVar1 = DAT_09188ad0;
        *(undefined4 *)(param_4 + 0x74) = uVar7;
        *(undefined4 *)(param_4 + 0x78) = param_2;
        uVar2 = *(undefined8 *)(param_4 + 0x40);
        *(undefined4 *)(param_4 + 0x7c) = uVar6;
        if (*(int *)(lVar1 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        uVar3 = UnityEngine_Object__op_Implicit(uVar2,0);
        uVar6 = 0x3f800000;
        if ((uVar3 & 1) != 0) {
          if (*(long *)(param_4 + 0x40) == 0) goto LAB_04511780;
          UnityEngine_SpriteRenderer__get_color(*(long *)(param_4 + 0x40),0);
        }
        *(undefined4 *)(param_4 + 0x80) = uVar6;
        return;
      }
    }
  }
LAB_04511780:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

