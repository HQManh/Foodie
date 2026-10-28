// rea decompile_all
// name: std::__ndk1::time_get<wchar_t,std::__ndk1::istreambuf_iterator<wchar_t,std::__ndk1::char_traits<wchar_t>>>::do_get
// address: 0x400b758
// body: available
// range: 0x400b758-0x400b837 inclusive
// range: 0x400bce4-0x400bd17 inclusive
// range: 0x400bdb0-0x400bdc7 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x400bdc4 to 0x404c2dc FUN_0404c2dc (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* std::__ndk1::time_get<wchar_t, std::__ndk1::istreambuf_iterator<wchar_t,
   std::__ndk1::char_traits<wchar_t> > >::do_get(std::__ndk1::istreambuf_iterator<wchar_t,
   std::__ndk1::char_traits<wchar_t> >, std::__ndk1::istreambuf_iterator<wchar_t,
   std::__ndk1::char_traits<wchar_t> >, std::__ndk1::ios_base&, unsigned int&, tm*, char, char)
   const */

undefined8
std::__ndk1::
time_get<wchar_t,std::__ndk1::istreambuf_iterator<wchar_t,std::__ndk1::char_traits<wchar_t>>>::
do_get(time_get<wchar_t,std::__ndk1::istreambuf_iterator<wchar_t,std::__ndk1::char_traits<wchar_t>>>
       *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,uint *param_5,int *param_6,
      undefined1 param_7)

{
  uint uVar1;
  uint uVar2;
  ulong uVar3;
  ulong uVar4;
  undefined1 auVar5 [16];
  uint uVar6;
  int iVar7;
  long lVar8;
  byte *pbVar9;
  byte *pbVar10;
  undefined8 uVar11;
  undefined1 ***pppuVar12;
  code *pcVar13;
  undefined8 *puVar14;
  long lVar15;
  undefined1 **local_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined4 uStack_88;
  undefined4 uStack_84;
  byte abStack_80 [16];
  long local_70;
  undefined8 local_68;
  undefined1 *local_60;
  undefined1 *local_58;
  
  pppuVar12 = &local_a0;
  *param_5 = 0;
  local_68 = param_2;
  ios_base::getloc();
  local_60 = ctype<wchar_t>::id;
  if (ctype<wchar_t>::id._0_8_ != -1) {
    local_a0 = &local_60;
    local_58 = (undefined1 *)&local_a0;
    __call_once((ulong *)ctype<wchar_t>::id,&local_58,FUN_0402d4a0);
  }
  if (((ulong)(*(long *)(local_70 + 0x18) - *(long *)(local_70 + 0x10) >> 3) <=
       (long)(int)ctype<wchar_t>::id._8_4_ - 1U) ||
     (lVar15 = *(long *)(*(long *)(local_70 + 0x10) + ((long)(int)ctype<wchar_t>::id._8_4_ - 1U) * 8
                        ), lVar15 == 0)) {
    uVar11 = FUN_03ff9c28();
    locale::~locale((locale *)&local_70);
                    /* WARNING: Subroutine does not return */
    FUN_0404c2dc(uVar11);
  }
  locale::~locale((locale *)&local_70);
  switch(param_7) {
  case 0x25:
    __get_percent(param_1,&local_68,param_3,param_5,lVar15);
    return local_68;
  default:
    goto code_r0x0400bce8;
  case 0x41:
  case 0x61:
    lVar8 = (*(code *)**(undefined8 **)(param_1 + 0x10))(param_1 + 0x10);
    lVar15 = FUN_03fffaf4(&local_68,param_3,lVar8,lVar8 + 0x150,lVar15,param_5,0);
    if (0x14f < lVar15 - lVar8) {
      return local_68;
    }
    lVar15 = (lVar15 - lVar8 >> 3) * -0x5555555555555555;
    auVar5 = SEXT816(lVar15) * SEXT816(0x4924924924924925);
    param_6[6] = (int)lVar15 + ((int)(auVar5._8_8_ >> 1) - (auVar5._12_4_ >> 0x1f)) * -7;
    return local_68;
  case 0x42:
  case 0x62:
  case 0x68:
    lVar8 = (**(code **)(*(long *)(param_1 + 0x10) + 8))(param_1 + 0x10);
    lVar15 = FUN_03fffaf4(&local_68,param_3,lVar8,lVar8 + 0x240,lVar15,param_5,0);
    if (0x23f < lVar15 - lVar8) {
      return local_68;
    }
    lVar15 = (lVar15 - lVar8 >> 3) * -0x5555555555555555;
    param_6[4] = (int)lVar15 +
                 ((int)((ulong)(lVar15 / 6 + (lVar15 >> 0x3f)) >> 1) -
                 (SUB164(SEXT816(lVar15) * SEXT816(0x2aaaaaaaaaaaaaab),0xc) >> 0x1f)) * -0xc;
    return local_68;
  case 0x44:
    puVar14 = (undefined8 *)&UNK_01a8f910;
    goto code_r0x0400bbc0;
  case 0x46:
    puVar14 = (undefined8 *)&UNK_01a8f790;
    goto code_r0x0400bbc0;
  case 0x48:
    iVar7 = FUN_0400c6d4(&local_68,param_3,param_5,lVar15,2);
    uVar6 = *param_5;
    if (0x17 < iVar7) break;
    goto code_r0x0400bb54;
  case 0x49:
    iVar7 = FUN_0400c6d4(&local_68,param_3,param_5,lVar15,2);
    uVar6 = *param_5;
    if (0xb < iVar7 - 1U) break;
code_r0x0400bb54:
    if ((uVar6 >> 2 & 1) == 0) {
      param_6[2] = iVar7;
      return local_68;
    }
    break;
  case 0x4d:
    iVar7 = FUN_0400c6d4(&local_68,param_3,param_5,lVar15,2);
    uVar6 = *param_5;
    if ((iVar7 < 0x3c) && ((uVar6 >> 2 & 1) == 0)) {
      param_6[1] = iVar7;
      return local_68;
    }
    break;
  case 0x52:
    uStack_90 = CONCAT44(uStack_90._4_4_,0x4d);
    uStack_98 = 0x250000003a;
    local_a0 = (undefined1 **)0x4800000025;
    pbVar9 = (byte *)((long)&uStack_90 + 4);
    goto code_r0x0400bbd8;
  case 0x53:
    iVar7 = FUN_0400c6d4(&local_68,param_3,param_5,lVar15,2);
    uVar6 = *param_5;
    if ((iVar7 < 0x3d) && ((uVar6 >> 2 & 1) == 0)) {
      *param_6 = iVar7;
      return local_68;
    }
    break;
  case 0x54:
    puVar14 = (undefined8 *)&UNK_01a8f830;
code_r0x0400bbc0:
    uStack_98 = puVar14[1];
    local_a0 = (undefined1 **)*puVar14;
    uStack_90 = puVar14[2];
    pbVar9 = abStack_80;
    uStack_88 = (undefined4)puVar14[3];
    uStack_84 = (undefined4)((ulong)puVar14[3] >> 0x20);
    pppuVar12 = &local_a0;
code_r0x0400bbd8:
    uVar11 = get(param_1,local_68,param_3,param_4,param_5,param_6,pppuVar12,pbVar9);
    return uVar11;
  case 0x58:
    pcVar13 = *(code **)(*(long *)(param_1 + 0x10) + 0x30);
    goto code_r0x0400ba48;
  case 0x59:
    iVar7 = FUN_0400c6d4(&local_68,param_3,param_5,lVar15,4);
    if (((byte)*param_5 >> 2 & 1) != 0) {
      return local_68;
    }
    param_6[5] = iVar7 + -0x76c;
    return local_68;
  case 99:
    pcVar13 = *(code **)(*(long *)(param_1 + 0x10) + 0x18);
code_r0x0400ba48:
    pbVar9 = (byte *)(*pcVar13)();
    uVar3 = (ulong)(*pbVar9 >> 1);
    pppuVar12 = (undefined1 ***)(pbVar9 + 4);
    if ((*pbVar9 & 1) != 0) {
      uVar3 = *(ulong *)(pbVar9 + 8);
      pppuVar12 = (undefined1 ***)*(byte **)(pbVar9 + 0x10);
    }
    pbVar9 = (byte *)((long)pppuVar12 + uVar3 * 4);
    goto code_r0x0400bbd8;
  case 100:
  case 0x65:
    iVar7 = FUN_0400c6d4(&local_68,param_3,param_5,lVar15,2);
    uVar6 = *param_5;
    if ((iVar7 - 1U < 0x1f) && ((uVar6 >> 2 & 1) == 0)) {
      param_6[3] = iVar7;
      return local_68;
    }
    break;
  case 0x6a:
    iVar7 = FUN_0400c6d4(&local_68,param_3,param_5,lVar15,3);
    uVar6 = *param_5;
    if ((iVar7 < 0x16e) && ((uVar6 >> 2 & 1) == 0)) {
      param_6[7] = iVar7;
      return local_68;
    }
    break;
  case 0x6d:
    iVar7 = FUN_0400c6d4(&local_68,param_3,param_5,lVar15,2);
    uVar6 = *param_5;
    if ((iVar7 - 1U < 0xc) && ((uVar6 >> 2 & 1) == 0)) {
      param_6[4] = iVar7 - 1U;
      return local_68;
    }
    break;
  case 0x6e:
  case 0x74:
    __get_white_space(param_1,&local_68,param_3,param_5,lVar15);
    return local_68;
  case 0x70:
    pbVar9 = (byte *)(**(code **)(*(long *)(param_1 + 0x10) + 0x10))(param_1 + 0x10);
    uVar3 = (ulong)(*pbVar9 >> 1);
    if ((*pbVar9 & 1) != 0) {
      uVar3 = *(ulong *)(pbVar9 + 8);
    }
    uVar4 = (ulong)(pbVar9[0x18] >> 1);
    if ((pbVar9[0x18] & 1) != 0) {
      uVar4 = *(ulong *)(pbVar9 + 0x20);
    }
    if (uVar3 + uVar4 != 0) {
      pbVar10 = (byte *)FUN_03fffaf4(&local_68,param_3,pbVar9,pbVar9 + 0x30,lVar15,param_5,0);
      iVar7 = param_6[2];
      if ((pbVar10 == pbVar9) && (iVar7 == 0xc)) {
        param_6[2] = 0;
        return local_68;
      }
      if ((long)pbVar10 - (long)pbVar9 != 0x18) {
        return local_68;
      }
      if (0xb < iVar7) {
        return local_68;
      }
      param_6[2] = iVar7 + 0xc;
      return local_68;
    }
    goto code_r0x0400bce8;
  case 0x72:
    pbVar9 = abStack_80 + 0xc;
    uStack_98 = 0x250000003a;
    local_a0 = (undefined1 **)0x4900000025;
    uStack_88 = 0x25;
    uStack_90 = 0x3a0000004d;
    abStack_80[4] = 0x25;
    abStack_80[5] = 0;
    abStack_80[6] = 0;
    abStack_80[7] = 0;
    abStack_80[8] = 0x70;
    abStack_80[9] = 0;
    abStack_80[10] = 0;
    abStack_80[0xb] = 0;
    uStack_84 = 0x53;
    abStack_80[0] = 0x20;
    abStack_80[1] = 0;
    abStack_80[2] = 0;
    abStack_80[3] = 0;
    pppuVar12 = &local_a0;
    goto code_r0x0400bbd8;
  case 0x77:
    iVar7 = FUN_0400c6d4(&local_68,param_3,param_5,lVar15,1);
    uVar6 = *param_5;
    if ((iVar7 < 7) && ((uVar6 >> 2 & 1) == 0)) {
      param_6[6] = iVar7;
      return local_68;
    }
    break;
  case 0x78:
    uVar11 = (**(code **)(*(long *)param_1 + 0x28))
                       (param_1,local_68,param_3,param_4,param_5,param_6);
    return uVar11;
  case 0x79:
    uVar6 = FUN_0400c6d4(&local_68,param_3,param_5,lVar15,4);
    if (((byte)*param_5 >> 2 & 1) != 0) {
      return local_68;
    }
    uVar1 = uVar6 + 0x76c;
    if (99 < uVar6) {
      uVar1 = uVar6;
    }
    uVar2 = uVar6 + 2000;
    if (0x44 < (int)uVar6) {
      uVar2 = uVar1;
    }
    param_6[5] = uVar2 - 0x76c;
    return local_68;
  }
code_r0x0400bcf0:
  *param_5 = uVar6 | 4;
  return local_68;
code_r0x0400bce8:
  uVar6 = *param_5;
  goto code_r0x0400bcf0;
}

