// rea decompile_all
// name: Coffee.UIEffects.ShadowUtil$$ApplyShadowZeroAlloc
// address: 0x43f792c
// body: available
// range: 0x43f792c-0x43f7be7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x43f7bd8 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x43f7bdc to 0x89db930 <EXTERNAL>::__stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void Coffee_UIEffects_ShadowUtil__ApplyShadowZeroAlloc
               (float param_1,float param_2,float param_3,long param_4,int *param_5,int *param_6)

{
  int iVar1;
  uint uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  int iVar7;
  float fVar8;
  undefined1 auStack_1bc [108];
  undefined8 local_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 local_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined7 uStack_f0;
  undefined4 uStack_e9;
  byte local_e5;
  undefined8 local_e4;
  undefined8 uStack_dc;
  undefined8 local_d4;
  undefined8 uStack_cc;
  undefined8 local_c4;
  undefined8 uStack_bc;
  undefined8 local_b4;
  undefined8 uStack_ac;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined7 uStack_88;
  undefined4 uStack_81;
  long local_78;
  
  lVar5 = tpidr_el0;
  local_78 = *(long *)(lVar5 + 0x28);
  if ((DAT_09517e1a & 1) == 0) {
    FUN_03f5c2a4(&DAT_091b1700);
    FUN_03f5c2a4(&DAT_091b1748);
    FUN_03f5c2a4(&DAT_091b1750);
    FUN_03f5c2a4(&DAT_091b1760);
    DAT_09517e1a = 1;
  }
  iVar1 = *param_6;
  uStack_148 = 0;
  local_150 = 0;
  uStack_138 = 0;
  uStack_140 = 0;
  uStack_128 = 0;
  local_130 = 0;
  uStack_118 = 0;
  uStack_120 = 0;
  uStack_98 = 0;
  local_a0 = 0;
  uStack_88 = 0;
  uStack_81 = 0;
  local_90 = 0;
  if (iVar1 - *param_5 < 1) {
    *param_5 = iVar1;
    if (param_4 == 0) {
      lVar5 = *(long *)(lVar5 + 0x28);
      goto LAB_043f7bcc;
    }
  }
  else {
    if (param_4 == 0) {
LAB_043f7bc4:
      lVar5 = *(long *)(lVar5 + 0x28);
LAB_043f7bcc:
      if (lVar5 == local_78) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      goto LAB_043f7bdc;
    }
    iVar7 = 0;
    iVar1 = *param_5 - iVar1;
    do {
      FUN_05894708(auStack_1bc,param_4,iVar1 + iVar7 + *param_6,DAT_091b1750);
      lVar3 = DAT_091b1700;
      lVar4 = *(long *)(param_4 + 0x10);
      *(int *)(param_4 + 0x1c) = *(int *)(param_4 + 0x1c) + 1;
      if (lVar4 == 0) goto LAB_043f7bc4;
      uVar2 = *(uint *)(param_4 + 0x18);
      if (uVar2 < *(uint *)(lVar4 + 0x18)) {
        *(uint *)(param_4 + 0x18) = uVar2 + 1;
        memmove((void *)(lVar4 + (long)(int)uVar2 * 0x6c + 0x20),auStack_1bc,0x6c);
      }
      else {
        uVar6 = *(undefined8 *)(*(long *)(*(long *)(lVar3 + 0x20) + 0xc0) + 0x70);
        memcpy(&local_110,auStack_1bc,0x6c);
        FUN_05894a80(param_4,&local_110,uVar6);
      }
      FUN_05894708(&local_110,param_4,iVar7 + *param_5,DAT_091b1750);
      uStack_98 = uStack_100;
      local_a0 = local_108;
      uStack_88 = uStack_f0;
      local_90 = local_f8;
      fVar8 = (float)NEON_ucvtf((uint)local_e5);
      uStack_81 = uStack_e9;
      uStack_148 = uStack_dc;
      local_150 = local_e4;
      uStack_138 = uStack_cc;
      uStack_140 = local_d4;
      uStack_128 = uStack_bc;
      local_130 = local_c4;
      uStack_118 = uStack_ac;
      uStack_120 = local_b4;
      local_110 = CONCAT44((float)((ulong)local_110 >> 0x20) + param_2,(float)local_110 + param_1);
      local_e5 = (byte)(int)(fVar8 * param_3);
      FUN_0589476c(param_4,iVar7 + *param_5,&local_110,DAT_091b1760);
      iVar7 = iVar7 + 1;
    } while (iVar1 + iVar7 != 0);
    *param_5 = *param_6;
  }
  *param_6 = *(int *)(param_4 + 0x18);
  if (*(long *)(lVar5 + 0x28) == local_78) {
    return;
  }
LAB_043f7bdc:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

