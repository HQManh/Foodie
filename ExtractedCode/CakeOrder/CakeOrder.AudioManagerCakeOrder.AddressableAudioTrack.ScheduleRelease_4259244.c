// rea decompile_all
// name: CakeOrder.AudioManagerCakeOrder.AddressableAudioTrack$$ScheduleRelease
// address: 0x4259244
// body: available
// range: 0x4259244-0x425948b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x4259488 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void CakeOrder_AudioManagerCakeOrder_AddressableAudioTrack__ScheduleRelease
               (float param_1,long param_2,undefined8 *param_3)

{
  uint uVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  
  if ((DAT_09516f37 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091bf670);
    FUN_03f5c2a4(&DAT_09180f88);
    FUN_03f5c2a4(&DAT_091976e0);
    FUN_03f5c2a4(&DAT_091aa4b8);
    FUN_03f5c2a4(&DAT_091aa4c8);
    FUN_03f5c2a4(&DAT_09188ad0);
    DAT_09516f37 = 1;
  }
  uVar2 = FUN_0640f598(param_3,DAT_091976e0);
  lVar5 = DAT_091aa4b8;
  if ((uVar2 & 1) == 0) {
    return;
  }
  lVar3 = *(long *)(param_2 + 0x68);
  if (lVar3 != 0) {
    uStack_68 = param_3[1];
    local_70 = *param_3;
    local_60 = param_3[2];
    lVar4 = *(long *)(lVar3 + 0x10);
    *(int *)(lVar3 + 0x1c) = *(int *)(lVar3 + 0x1c) + 1;
    if (lVar4 != 0) {
      uVar1 = *(uint *)(lVar3 + 0x18);
      if (uVar1 < *(uint *)(lVar4 + 0x18)) {
        lVar4 = lVar4 + (long)(int)uVar1 * 0x18;
        *(uint *)(lVar3 + 0x18) = uVar1 + 1;
        *(undefined8 *)(lVar4 + 0x28) = uStack_68;
        *(undefined8 *)(lVar4 + 0x20) = local_70;
        *(undefined8 *)(lVar4 + 0x30) = local_60;
        thunk_FUN_03f5d7b8(lVar4 + 0x20,0);
      }
      else {
        local_50 = local_70;
        uStack_48 = uStack_68;
        local_40 = local_60;
        FUN_0564eb10(lVar3,&local_50,
                     *(undefined8 *)(*(long *)(*(long *)(lVar5 + 0x20) + 0xc0) + 0x70));
      }
      uVar6 = *(undefined8 *)(param_2 + 0x10);
      if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      uVar2 = UnityEngine_Object__op_Inequality(uVar6,0,0);
      if ((uVar2 & 1) != 0) {
        if (*(long *)(param_2 + 0x10) == 0) goto LAB_04259488;
        uVar2 = UnityEngine_Behaviour__get_isActiveAndEnabled(*(long *)(param_2 + 0x10),0);
        if ((uVar2 & 1) != 0) {
          uStack_88 = param_3[1];
          local_90 = *param_3;
          local_80 = param_3[2];
          lVar5 = *(long *)(param_2 + 0x10);
          uVar6 = CakeOrder_AudioManagerCakeOrder_AddressableAudioTrack__ReleaseAfter
                            (param_1 + 0.25,param_2,&local_90);
          if (lVar5 != 0) {
            UnityEngine_MonoBehaviour__StartCoroutine(lVar5,uVar6,0);
            return;
          }
          goto LAB_04259488;
        }
      }
      if (*(long *)(param_2 + 0x68) != 0) {
        uStack_48 = param_3[1];
        local_50 = *param_3;
        local_40 = param_3[2];
        FUN_05650404(*(long *)(param_2 + 0x68),&local_50,DAT_091aa4c8);
        uVar8 = param_3[1];
        uVar7 = *param_3;
        uVar6 = param_3[2];
        if (*(int *)(DAT_09180f88 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        local_50 = uVar7;
        uStack_48 = uVar8;
        local_40 = uVar6;
        FUN_04b71ee0(&local_50,DAT_091bf670);
        return;
      }
    }
  }
LAB_04259488:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

