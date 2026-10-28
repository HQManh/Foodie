// rea decompile_all
// name: Utilities.DraggableObject$$OnMouseDrag
// address: 0x4510634
// body: available
// range: 0x4510634-0x45107eb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x45107e4 to 0x8674f54 UnityEngine.Events.UnityEvent$$Invoke (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x45107e8 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void Utilities_DraggableObject__OnMouseDrag
               (undefined1 param_1 [16],float param_2,float param_3,long *param_4)

{
  long lVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar6;
  ulong uVar5;
  float fVar7;
  ulong uVar8;
  float fVar9;
  ulong local_40;
  
  if ((DAT_0951852e & 1) == 0) {
    FUN_03f5c2a4(&DAT_09189c30);
    DAT_0951852e = 1;
  }
  if (((char)param_4[10] == '\0') ||
     (fVar2 = (float)UnityEngine_Time__get_timeScale(0), fVar2 <= 0.0)) {
    return;
  }
  fVar2 = (float)(**(code **)(*param_4 + 0x198))(param_4,*(undefined8 *)(*param_4 + 0x1a0));
  fVar9 = *(float *)(param_4 + 5);
  fVar2 = fVar2 + (float)param_4[4];
  param_2 = param_2 + (float)((ulong)param_4[4] >> 0x20);
  local_40 = CONCAT44(param_2,fVar2);
  if (*(char *)((long)param_4 + 0x51) != '\0') {
    if (*(char *)((long)param_4 + 0x52) == '\0') {
      if (*(int *)(DAT_09189c30 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      uVar5 = *(ulong *)((long)param_4 + 0x54);
      fVar7 = (float)uVar5 + (float)*(undefined8 *)((long)param_4 + 0x5c);
      fVar3 = (float)(uVar5 >> 0x20);
      fVar4 = fVar3 + (float)((ulong)*(undefined8 *)((long)param_4 + 0x5c) >> 0x20);
      uVar8 = CONCAT44(fVar4,fVar7);
      local_40 = uVar5 ^ (uVar5 ^ uVar8 ^ (uVar8 ^ local_40) &
                                          ~CONCAT44(-(uint)(fVar4 < param_2),-(uint)(fVar7 < fVar2))
                         ) & ~CONCAT44(-(uint)(param_2 < fVar3),-(uint)(fVar2 < (float)uVar5));
    }
    else {
      lVar1 = UnityEngine_Camera__get_main(0);
      if (*(int *)(DAT_09189c30 + 0xe4) == 0) {
        FUN_03f5c424(DAT_09189c30);
      }
      if (lVar1 == 0) goto LAB_045107e8;
      fVar7 = *(float *)(param_4 + 0xb);
      fVar3 = (float)UnityEngine_Camera__ViewportToWorldPoint
                               (*(undefined4 *)((long)param_4 + 0x54),fVar7,0,lVar1,0);
      lVar1 = UnityEngine_Camera__get_main(0);
      if (lVar1 == 0) goto LAB_045107e8;
      fVar6 = (float)((ulong)*(undefined8 *)((long)param_4 + 0x5c) >> 0x20) +
              (float)((ulong)*(undefined8 *)((long)param_4 + 0x54) >> 0x20);
      fVar4 = (float)UnityEngine_Camera__ViewportToWorldPoint
                               (CONCAT44(fVar6,(float)*(undefined8 *)((long)param_4 + 0x5c) +
                                               (float)*(undefined8 *)((long)param_4 + 0x54)),fVar6,0
                                ,lVar1,0);
      local_40 = CONCAT44(fVar6,fVar4) ^
                 (CONCAT44(fVar6,fVar4) ^ local_40) &
                 ~CONCAT44(-(uint)(fVar6 < param_2),-(uint)(fVar4 < fVar2));
      local_40 = local_40 ^
                 (local_40 ^ CONCAT44(fVar7,fVar3)) &
                 CONCAT44(-(uint)(param_2 < fVar7),-(uint)(fVar2 < fVar3));
    }
  }
  lVar1 = UnityEngine_Component__get_transform(param_4,0);
  if (lVar1 != 0) {
    UnityEngine_Transform__set_position(local_40,local_40 >> 0x20,param_3 + fVar9,lVar1,0);
    if (param_4[8] != 0) {
      UnityEngine_Events_UnityEvent__Invoke(param_4[8],0);
      return;
    }
  }
LAB_045107e8:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

