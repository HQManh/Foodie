// rea decompile_all
// name: std::__ndk1::time_get<char,std::__ndk1::istreambuf_iterator<char,std::__ndk1::char_traits<char>>>::get
// address: 0x4008d88
// body: available
// range: 0x4008d88-0x400926f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x400926c to 0x404c2dc FUN_0404c2dc (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Type propagation algorithm not settling */
/* std::__ndk1::time_get<char, std::__ndk1::istreambuf_iterator<char, std::__ndk1::char_traits<char>
   > >::get(std::__ndk1::istreambuf_iterator<char, std::__ndk1::char_traits<char> >,
   std::__ndk1::istreambuf_iterator<char, std::__ndk1::char_traits<char> >, std::__ndk1::ios_base&,
   unsigned int&, tm*, char const*, char const*) const */

long * __thiscall
std::__ndk1::time_get<char,std::__ndk1::istreambuf_iterator<char,std::__ndk1::char_traits<char>>>::
get(time_get<char,std::__ndk1::istreambuf_iterator<char,std::__ndk1::char_traits<char>>> *this,
   long *param_2,long *param_3,undefined8 param_4,uint *param_5,undefined8 param_6,byte *param_7,
   byte *param_8)

{
  long *plVar1;
  byte bVar2;
  byte *pbVar3;
  bool bVar4;
  char cVar5;
  char cVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  undefined8 uVar10;
  uint uVar11;
  long lVar12;
  ulong uVar13;
  byte *pbVar14;
  long *plVar15;
  long local_80;
  undefined1 *local_78;
  undefined1 ***local_70;
  undefined1 **local_68;
  
  ios_base::getloc();
  local_78 = ctype<char>::id;
  if (ctype<char>::id._0_8_ != -1) {
    local_68 = &local_78;
    local_70 = &local_68;
    __call_once((ulong *)ctype<char>::id,&local_70,FUN_0402d4a0);
  }
  if (((ulong)(*(long *)(local_80 + 0x18) - *(long *)(local_80 + 0x10) >> 3) <=
       (long)(int)ctype<char>::id._8_4_ - 1U) ||
     (plVar15 = *(long **)(*(long *)(local_80 + 0x10) + ((long)(int)ctype<char>::id._8_4_ - 1U) * 8)
     , plVar15 == (long *)0x0)) {
    uVar10 = FUN_03ff9c28();
    locale::~locale((locale *)&local_80);
                    /* WARNING: Subroutine does not return */
    FUN_0404c2dc(uVar10);
  }
  locale::~locale((locale *)&local_80);
  *param_5 = 0;
  if (param_7 != param_8) {
    while (param_2 != (long *)0x0) {
      if (param_2[3] == param_2[4]) {
        iVar9 = (**(code **)(*param_2 + 0x48))(param_2);
        bVar4 = iVar9 == -1;
        plVar1 = (long *)0x0;
        if (!bVar4) {
          plVar1 = param_2;
        }
        goto joined_r0x04008ea8;
      }
      bVar4 = false;
      if (param_3 != (long *)0x0) goto LAB_04008e68;
LAB_04008e84:
      if (bVar4 != false) goto LAB_0400919c;
LAB_04008ed4:
      cVar5 = (**(code **)(*plVar15 + 0x48))(plVar15,*param_7,0);
      if (cVar5 == '%') {
        if (param_7 + 1 == param_8) goto LAB_0400919c;
        uVar7 = (**(code **)(*plVar15 + 0x48))(plVar15,param_7[1],0);
        if (((uVar7 & 0xff) == 0x45) || ((uVar7 & 0xff) == 0x30)) {
          if (param_7 + 2 == param_8) goto LAB_0400919c;
          uVar8 = (**(code **)(*plVar15 + 0x48))(plVar15,param_7[2],0);
          lVar12 = 2;
          uVar11 = uVar7;
        }
        else {
          uVar11 = 0;
          lVar12 = 1;
          uVar8 = uVar7;
        }
        param_7 = param_7 + lVar12;
        param_2 = (long *)(**(code **)(*(long *)this + 0x48))
                                    (this,param_2,param_3,param_4,param_5,param_6,uVar8,uVar11);
LAB_04008fcc:
        param_7 = param_7 + 1;
      }
      else if (((char)*param_7 < '\0') ||
              (pbVar14 = param_7, (*(ulong *)(plVar15[2] + (ulong)*param_7 * 8) & 1) == 0)) {
        if ((byte *)param_2[3] == (byte *)param_2[4]) {
          uVar7 = (**(code **)(*param_2 + 0x48))(param_2);
        }
        else {
          uVar7 = (uint)*(byte *)param_2[3];
        }
        cVar5 = (**(code **)(*plVar15 + 0x18))(plVar15,uVar7);
        cVar6 = (**(code **)(*plVar15 + 0x18))(plVar15,*param_7);
        if (cVar5 == cVar6) {
          if (param_2[3] == param_2[4]) {
            (**(code **)(*param_2 + 0x50))(param_2);
            goto LAB_04008fcc;
          }
          param_7 = param_7 + 1;
          param_2[3] = param_2[3] + 1;
        }
        else {
          *param_5 = 4;
        }
      }
      else {
        do {
          pbVar14 = pbVar14 + 1;
          pbVar3 = param_8;
          if (pbVar14 == param_8) goto joined_r0x040090a0;
          pbVar3 = pbVar14;
          if ((char)*pbVar14 < '\0') goto joined_r0x040090a0;
          param_7 = param_7 + 1;
        } while ((*(ulong *)(plVar15[2] + (ulong)*pbVar14 * 8) & 1) != 0);
LAB_040090b0:
        if (param_2 == (long *)0x0) goto LAB_04009190;
LAB_040090b4:
        if (param_2[3] == param_2[4]) {
          iVar9 = (**(code **)(*param_2 + 0x48))(param_2);
          bVar4 = iVar9 == -1;
          if (bVar4) {
            param_2 = (long *)0x0;
          }
        }
        else {
          bVar4 = false;
        }
        if (param_3 != (long *)0x0) goto LAB_040090f4;
        while (bVar4 == false) {
          while( true ) {
            if ((byte *)param_2[3] == (byte *)param_2[4]) {
              uVar13 = (**(code **)(*param_2 + 0x48))(param_2);
              uVar13 = uVar13 & 0xff;
              if ((uint)uVar13 >> 7 != 0) goto LAB_04009068;
            }
            else {
              bVar2 = *(byte *)param_2[3];
              uVar13 = (ulong)bVar2;
              if ((char)bVar2 < '\0') goto LAB_04009068;
            }
            if ((*(ulong *)(plVar15[2] + uVar13 * 8) & 1) == 0) goto LAB_04009068;
            if (param_2[3] != param_2[4]) {
              param_2[3] = param_2[3] + 1;
              goto LAB_040090b0;
            }
            (**(code **)(*param_2 + 0x50))(param_2);
            pbVar3 = param_7;
joined_r0x040090a0:
            param_7 = pbVar3;
            if (param_2 != (long *)0x0) goto LAB_040090b4;
LAB_04009190:
            bVar4 = true;
            if (param_3 == (long *)0x0) break;
LAB_040090f4:
            if (param_3[3] == param_3[4]) {
              iVar9 = (**(code **)(*param_3 + 0x48))(param_3);
              if (iVar9 == -1) {
                param_3 = (long *)0x0;
              }
              if (bVar4 == (iVar9 == -1)) goto LAB_04009068;
            }
            else if (bVar4 == false) goto LAB_04009068;
          }
        }
      }
LAB_04009068:
      if ((param_7 == param_8) || (*param_5 != 0)) goto LAB_040091a4;
    }
    bVar4 = true;
    plVar1 = param_2;
joined_r0x04008ea8:
    param_2 = plVar1;
    if (param_3 == (long *)0x0) goto LAB_04008e84;
LAB_04008e68:
    if (param_3[3] == param_3[4]) {
      iVar9 = (**(code **)(*param_3 + 0x48))(param_3);
      plVar1 = (long *)0x0;
      if (iVar9 != -1) {
        plVar1 = param_3;
      }
      param_3 = plVar1;
      if (bVar4 == (iVar9 == -1)) goto LAB_0400919c;
      goto LAB_04008ed4;
    }
    if (bVar4 != false) goto LAB_04008ed4;
LAB_0400919c:
    *param_5 = 4;
  }
LAB_040091a4:
  plVar15 = param_2;
  if (param_2 == (long *)0x0) {
    bVar4 = true;
  }
  else if (param_2[3] == param_2[4]) {
    iVar9 = (**(code **)(*param_2 + 0x48))(param_2);
    bVar4 = iVar9 == -1;
    plVar15 = (long *)0x0;
    if (!bVar4) {
      plVar15 = param_2;
    }
  }
  else {
    bVar4 = false;
  }
  if (param_3 == (long *)0x0) {
    if (bVar4 == false) {
      return plVar15;
    }
  }
  else if (param_3[3] == param_3[4]) {
    iVar9 = (**(code **)(*param_3 + 0x48))(param_3);
    if (bVar4 != (iVar9 == -1)) {
      return plVar15;
    }
  }
  else if (bVar4 != false) {
    return plVar15;
  }
  *param_5 = *param_5 | 2;
  return plVar15;
}

